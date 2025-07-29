#include "game.h"
#include <random>


Game::Game()
{
    
    grid=Grid();
    blocks = GetAllBlocks();
    current_block = GetRandomBlock();
    next_block = GetRandomBlock();
}

Block Game::GetRandomBlock() {
    if (blocks.empty()) {
        blocks = GetAllBlocks();
        // If the blocks vector is empty, refill it with all block types   
    }
    
    
    int random_index = rand() %blocks.size();
    // Randomly select a block from the blocks vector from 0 to 6, as per the blocks var above
    Block block = blocks[random_index];
    // creates a block object of type Block using the indexed object from the blocks vector. Basically takes the attribute values of the indexed block and puts them in the Block object.
    blocks.erase(blocks.begin() +random_index);
    // removes the block from the vector so that it cannot be selected again
    return block;
}

std::vector<Block> Game::GetAllBlocks(){
    return {IBlock(), JBlock(), LBlock(), SBlock(), TBlock(), SqBlock()};
    // refill the blocks vector.
}

void Game::Draw(){
    // initializes the grid and the current block
    grid.Draw();
    // takes the grid from the Game class, which is taken from the Grid class. The Draw method is also from the Grid class.
    current_block.Draw();
    // This Draw method is from thee Block class!
}

void Game::HandleInput()
{
    int key_pressed = GetKeyPressed();
    // GetKeyPressed() is a raylib function that returns the key that was pressed.
    switch(key_pressed) {
    case KEY_LEFT:
        MoveBlockLeft();
        break;
    
    case KEY_RIGHT:
        MoveBlockRight();
        break;
    
    case KEY_DOWN:
        MoveBlockDown();
        break;
    
    case KEY_UP:
        RotateBlock();
        break;
    }
}

void Game:: MoveBlockLeft(){
    current_block.Move(0, -1);
    // Original Move method is in the Block class.
    if (IsBlockOOB()) {
        current_block.Move(0, 1); // Undo the move if it goes out of bounds
    }
}
void Game::MoveBlockRight(){
    current_block.Move(0, 1);
    if (IsBlockOOB()) {
        current_block.Move(0, -1);
    }
}
void Game::MoveBlockDown(){
    current_block.Move(1, 0);
    if (IsBlockOOB()) {
        current_block.Move(-1, 0);
    }
}
void Game::RotateBlock()
{
    current_block.Rotate();
    if (IsBlockOOB()) {
        current_block.UndoRotation();
        // todo maybe move the block to a good position instead of undoing the rotation
    }
}

bool Game::IsBlockOOB()
{
    std::vector<Position> tiles = current_block.GetCellPositions();
    for (Position item: tiles){
        if (grid.IsCellOOB(item.row, item.column)){
            return true;
        }
    }
    return false;
}
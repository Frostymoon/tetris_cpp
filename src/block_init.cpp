#include "block.h"

Block::Block() {
    cell_size = 30; 
    rotation_state = 0; 
    colors = GetCellColors();
    row_offset = 0;
    column_offset = 0;
};

void Block::Draw(){

    std::vector<Position> tiles = GetCellPositions();;

    for (Position item : tiles)
    // reads as: for each "item" of type "Position" in the vector "tile", do...
    // tile is a vector containing vectors.
    //for each item of type position (containing row and column) in the vector tiles, meaning for each subvector in tiles.
    {
        DrawRectangle(item.column * cell_size+1, item.row * cell_size+1, cell_size-1, cell_size-1, colors[id]);
                  //the ^ column variable in item
    }
}

void Block :: Move(int rows, int columns) {
        row_offset += rows;
        column_offset += columns;
}

std::vector<Position> Block::GetCellPositions(){
    std::vector<Position> tiles = cells[rotation_state];
    std::vector<Position> move_tiles;
    //item type vector<Postion> is a vector of Position objects, which contain row and column
    for (Position item:tiles){
        //for each item of type Position (int row, int column) in tiles, do...
        Position new_pos = Position(item.row + row_offset, item.column + column_offset);
        move_tiles.push_back(new_pos);
    }
    return move_tiles;
}
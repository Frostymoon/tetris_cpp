#pragma once
#include "grid.h"
#include "block_pieces.cpp"

class Game{
    private:
        std::vector<Block> blocks;
        Block current_block;
        Block next_block;
        bool IsBlockOOB();
        void LockBlock();
    
    public:
        Game();
        Grid grid;
        Block GetRandomBlock();
        void Draw();
        void HandleInput();
        void MoveBlockLeft();
        void MoveBlockRight();
        void MoveBlockDown();
        void RotateBlock();
        std::vector<Block> GetAllBlocks();
};
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
        bool BlockFits();
        void UpdateScore(int lines_cleared, int move_down_points);
    
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
        void Reset();
        bool game_over;
        int score;
};
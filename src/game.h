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
        Block GetRandomBlock();
        void MoveBlockLeft();
        void MoveBlockRight();
        Grid grid;
    
    public:
        Game();
        void Draw();
        void HandleInput();
        void MoveBlockDown();
        void RotateBlock();
        std::vector<Block> GetAllBlocks();
        void Reset();
        bool game_over;
        int score;
};
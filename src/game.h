#pragma once
#include "grid.h"
#include "block_pieces.cpp"

class Game{
private:
    std::vector<Block> blocks;
    Block current_block;
    Block next_block;
public:
    Game();
    Grid grid;
    Block GetRandomBlock();
    void Draw();
    std::vector<Block> GetAllBlocks();
};
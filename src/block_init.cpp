#include "block.h"

Block::Block() {
    cell_size = 30; 
    rotation_state = 0; 
    colors = GetCellColors();
};

void Block::Draw(){
    std::vector<Position> tiles = cells[rotation_state];

    for (Position item : tiles)
    // reads as: for each "item" of type "Position" in the vector "tile", do...
    // tile is a vector containing vectors.
    //for each item of type position (containing row and column) in the vector tiles, meaning for each subvector in tiles.
    {
        DrawRectangle(item.column * cell_size+1, item.row * cell_size+1, cell_size-1, cell_size-1, colors[id]);
                  //the ^ column variable in item
    }
}
#pragma once
#include <vector>
#include <map>
#include "position.h"
#include "colors.h"

class Block {
     
    private:
        int cell_size;
        int rotation_state;
        std::vector<Color> colors;
        // ^ this method is in the private space because the constructor used in "block.cpp" will not be used anywhere else other than the blocks.
        int row_offset;
        int column_offset;
        // variables used for moving blocks

    public:
        Block();
        int id;
        std::map<int, std::vector<Position>> cells;
        void Draw();

        void Move(int rows, int columns);
        std::vector<Position> GetCellPositions();

        void Rotate();
        void UndoRotation();
};
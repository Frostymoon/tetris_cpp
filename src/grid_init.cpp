#include "grid.h"
#include <iostream>
#include "colors.h"

Grid::Grid(){
// reads as: From the Grid class, use the emtpy Grid() constructor and add these values
    num_rows = 20;
    num_cols = 10;
    cell_size = 30; 
    Initialize();
    colors = GetCellColors();
}

void Grid::Initialize(){
// Initialize the grid with zeros
    for (int row = 0; row < num_rows; row++){
        for (int column = 0; column < num_cols; column++){
            grid[row][column] = 0; 
        }
    }
}

void Grid::Print(){
// Print the grid to the CONSOLE
    for (int row = 0; row < num_rows; row++){
        for (int column = 0; column < num_cols; column++){
            std::cout << grid[row][column] << " "; 
        }
        std::cout << std:: endl;

    }
}

void Grid::Draw(){
// draws grid on the game window
    for (int row = 0; row < num_rows; row++){
        for (int column = 0; column < num_cols; column++){
            int cell_value = grid[row][column];
            DrawRectangle(column * cell_size+1, row * cell_size+1, cell_size-1, cell_size-1, colors[cell_value]);
            // built-in raylib method
            // this method creates blue grid lines on the game window
        }
    }
}
#include "grid.h"
#include <iostream>

Grid::Grid(){
    num_rows = 20;
    num_cols = 10;
    cell_size = 30; 
    Initialize();
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
// Print the grid to the console
    for (int row = 0; row < num_rows; row++){
        for (int column = 0; column < num_cols; column++){
            std::cout << grid[row][column] << " "; 
        }
        std::cout << std:: endl;

    }
}
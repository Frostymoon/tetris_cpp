#include "grid.h"
#include <iostream>

Grid::Grid(){
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

std::vector<Color> Grid::GetCellColors() {
// this method must return values of type vector<Color>
    Color dark_grey = {26, 31, 40, 255};
    Color green = {47, 230, 23, 255};
    Color red = {232, 18, 18, 255};
    Color orange = {226, 116, 17, 255};
    Color yellow = {237, 234, 4, 255};
    Color purple = {166, 0, 247, 255};
    Color cyan = {21, 204, 209, 255};
    Color blue = {13, 64, 216, 255};

    return {dark_grey, green, red, orange, yellow, purple, cyan, blue};
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
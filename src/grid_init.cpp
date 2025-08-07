#include "grid.h"
#include <iostream>
#include "colors.h"


Grid::Grid()
{
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
            DrawRectangle(column * cell_size+11, row * cell_size+11, cell_size-1, cell_size-1, colors[cell_value]);
            // built-in raylib method
            // this method creates blue grid lines on the game window
        }
    }
}

bool Grid::IsCellEmpty(int row, int column)
{
    if (grid[row][column] == 0) {
        return true;
    } 
    return false;
}

bool Grid::IsCellOOB(int row, int column)
{
    // check if out of bounds
    if (row >= 0 && row < num_rows && column >= 0 && column < num_cols){
        return false; // cell is within bounds
    } else {
        return true; // cell is out of bounds
    }
}

void Grid::MoveRowDown(int row, int num_rows)
{
    for (int column = 0; column < num_cols; column++){
        grid[row + num_rows][column] = grid[row][column];
        grid[row][column] = 0; // clear the original row
    }
}

int Grid::ClearFullRows()
{
    int completed = 0;
    for (int row = num_rows -1; row >=0; row --){
        // checks all rows in reverse order, from bottom to top
        if (IsRowFull(row)){
            ClearRow(row);
            completed++;
            // clears full row and keeps count of how many completed rows there are
    }
    else if (completed > 0) {
            MoveRowDown(row, completed);
            // moves uncompleted rows down by how many completed rows have been registered
        }
    }
    return completed; // returns the number of cleared rows
}

bool Grid::IsRowFull(int row)
{
    // checks if a row is full
    for (int column = 0; column < num_cols; column++){
        if (grid[row][column] == 0){
            return false;
        }
    }
    return true; // all cells in the row are filled
}

void Grid::ClearRow(int row)
{
    // clears a full row by setting all its cells to 0
    for (int column = 0; column < num_cols; column++){
        grid[row][column] = 0; 
    }
}

bool Grid::IsColumnFull(int column)
{
    for (int row = 0; row < num_rows; row++){
        if (grid[row][column] == 0){
            return false; // if any cell in the column is empty, the column is not full
        }
    }
    return true;
}

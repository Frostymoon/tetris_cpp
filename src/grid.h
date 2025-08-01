#pragma once //ensures that this header file is included only once in order to prevent redefinition errors
/* 
!!!  redefinition errors occur when there are more definitions for the same thing. 
!!!  if you define an entity (var, class, method) more than once, the compiler can't decide which is the correct one, so it throws an error. 
!!!  this is why we use #pragma once to prevent this from happening 
*/
#include <vector>
#include <raylib.h> //imported for Color struct

class Grid{
    private: // other parts of the game don't need this info, so we make them private
        int num_rows;
        int num_cols;
        int cell_size; // in pixels
        std::vector<Color> colors; // declaring the vector (list / array) of colors that will be used for blocks or pieces
        bool IsRowFull(int row);
        void ClearRow(int row);
        bool IsColumnFull(int column);

    public:
        Grid(); //empty constructor

        void Initialize();
        void Print();
        void Draw();
        int grid[20][10]; 
        bool IsCellEmpty(int row, int column); 
        bool IsCellOOB(int row, int column);
        void MoveRowDown(int row, int num_rows);
        int ClearFullRows();
    
};
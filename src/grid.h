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
        std::vector<Color> GetCellColors(); //declaring method that gets all the colors we need for blockk and empty cells
    public:
        Grid(); //empty constructor

        void Initialize();
        void Print();
        void Draw();
        int grid[20][10]; 
    
};
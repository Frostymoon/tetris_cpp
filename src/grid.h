#pragma once //ensures that this header file is included only once in order to prevent redefinition errors
/* 
!!!  redefinition errors occur when there are more definitions for the same thing. 
!!!  if you define an entity (var, class, method) more than once, the compiler can't decide which is the correct one, so it throws an error. 
!!!  this is why we use #pragma once to prevent this from happening 
*/

class Grid{
    private: // other parts of the game don't need this info, so we make them private
        int num_rows;
        int num_cols;
        int cell_size; // in pixels
    
    public:
        Grid(); //empty constructor

        void Initialize();
        void Print();

        int grid[20][10]; 
    
};
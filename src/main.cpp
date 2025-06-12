#include <raylib.h>
#include "grid.h" 

int main() 
{
    // raylib has colors defined as "struct Color" with {red, green, blue, alpha}. alpha is transparency. Here i have defined a color
    Color dark_blue = {44, 44, 127, 255}; 

    // creates the window with 300 width, 6600 height, and the title "Tetris Window"
    InitWindow(300, 600, "Tetris C++"); 
    // without this, the game would run as fast as the PC can handle
    SetTargetFPS(60); 

    Grid grid = Grid(); 
    // Grid is acting like a data type, so we can create a variable of type Grid. grid is the name of the variable, and Grid() is the constructor.
    // basically, we are creating grid onject of type Grid whose values are the ones in the constructor Grid() in grid.cpp
    grid.grid[0][0] = 1; 
    grid.grid[3][5] = 4; 
    grid.grid[17][7] = 7; 
    grid.Print();

    //while loop that keeps the window alive until user closes
    while (WindowShouldClose() == false){ 

        // starts canvas drawing
        BeginDrawing(); 
        // clears the background with the color defined above
        ClearBackground(dark_blue);
        grid.Draw(); 

        EndDrawing();
    }

    // either use the x in the top-right corner, or press escape
    CloseWindow(); 
}
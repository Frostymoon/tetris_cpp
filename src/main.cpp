#include <raylib.h>
#include "game.h"

double last_update_time = 0.0;
bool EventTriggered(double interval){
    double time_elapsed = GetTime();
    // GetTime() is a raylib function that returns the time elapsed since the program started in seconds

    if (time_elapsed - last_update_time >= interval) {
        last_update_time = time_elapsed;
        return true;
    }
    return false;
}


int main() 
{
    // raylib has colors defined as "struct Color" with {red, green, blue, alpha}. alpha is transparency. Here i have defined a color
    Color dark_blue = {44, 44, 127, 255}; 

    // creates the window with 300 width, 6600 height, and the title "Tetris Window"
    InitWindow(300, 600, "Tetris C++"); 
    // without this, the game would run as fast as the PC can handle
    SetTargetFPS(60); 
    Game game = Game();
    // creates a game object of type Game, which contains the grid and the blocks

    while (WindowShouldClose() == false){ 
        //while loop that keeps the window alive until user closes

        game.HandleInput();
        
        if (EventTriggered(1.2)){
            game.MoveBlockDown();
        }

        game.Draw();
        // calls the Draw method from the game object, which draws the grid AND the current block
        
        BeginDrawing(); 
        // clears the background with the color defined above. raylib method!
        
        ClearBackground(dark_blue); //raylib method!
        EndDrawing();
    }

    // either use the x in the top-right corner, or press escape
    CloseWindow(); 
}
#include <raylib.h>
#include "game.h"
#include "colors.h"

double last_update_time = 0.0;

bool EventTriggered(double interval){
    double time_elapsed = GetTime(); // GetTime() is a raylib function that returns the time elapsed since the program started in seconds
    
    if (time_elapsed - last_update_time >= interval) {
        last_update_time = time_elapsed;
        return true;
    }
    return false;
}


int main() 
{    
    InitWindow(500, 620, "Tetris C++"); // creates the window with 300 width, 6600 height, and the title "Tetris Window"
    SetTargetFPS(60); // without this, the game would run as fast as the PC can handle

    Font font = LoadFontEx("Font/Doctor_Glitch.otf", 64, 0, 0); //raylib function for loading in a font in the Font folder of the mayn raylib folder.

    Game game = Game(); // creates a game object of type Game, which contains the grid and the blocks

    while (WindowShouldClose() == false){ //while loop that keeps the window alive until user closes
        game.HandleInput();
        
        if (EventTriggered(0.2)){
            game.MoveBlockDown();
        }

        game.Draw(); // calls the Draw method from the game object, which draws the grid AND the current block
        BeginDrawing(); // clears the background with the color defined above. raylib method!
        ClearBackground(dark_blue); //raylib method!
        DrawTextEx(font, "Score", {365, 15}, 38, 2, WHITE);
        DrawTextEx(font, "Next", {365, 175}, 38, 2, WHITE);
        
        if (game.game_over) {
            DrawTextEx(font, "Game Over", {320, 450}, 38, 2, WHITE);
        }

        DrawRectangleRounded({320, 55, 170, 60}, 0.3, 6, light_blue);
        DrawRectangleRounded({320, 215, 170, 180}, 0.3, 6, light_blue);
        EndDrawing();
    }
    CloseWindow(); // either use the x in the top-right corner, or press escape
}
#include "position.h"

Position::Position(int row, int column){
// ctrl+click on each of these variables tells you what "this" does. 
// in "this" current instance of the class Position, "row" from position.h is equal to the "row" passed as an argument to the constructor. same with "column"
// "this" reffers to ONLY the current instance of the Position class. ONLY this constructor.
    this -> row = row;
    this -> column = column;
}
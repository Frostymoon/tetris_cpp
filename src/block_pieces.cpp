#include "block.h"
#include "position.h"

class LBlock :public Block{
// a class "LBlock" that inherets the public properties of the Block class
    public:
        LBlock(){
            id = 1;
            cells[0] = {Position(0,1), Position(1,1), Position(2,1), Position(2,2)};
            cells[1] = {Position(1,0), Position(1,1), Position(1,2), Position(2,0)};
            cells[2] = {Position(0,0), Position(0,1), Position(1,1), Position(2,1)};
            cells[3] = {Position(1,0), Position(1,1), Position(1,2), Position(0,2)};
            Move(0,3); // Adjust initial position to center the block
        }
};

class JBlock :public Block{
// a class "LBlock" that inherets the public properties of the Block class
    public:
        JBlock(){
            id = 2;
            cells[0] = {Position(0,1), Position(1,1), Position(2,1), Position(2,0)};
            cells[1] = {Position(0,0), Position(1,0), Position(1,1), Position(1,2)};
            cells[2] = {Position(0,1), Position(0,2), Position(1,1), Position(2,1)};
            cells[3] = {Position(1,0), Position(1,1), Position(1,2), Position(2,2)};
            Move(0,3); // Adjust initial position to center the block
        }
};

class IBlock :public Block{
// a class "LBlock" that inherets the public properties of the Block class
    public:
        IBlock(){
            id = 3;
            cells[0] = {Position(1,0), Position(1,1), Position(1,2), Position(1,3)};
            cells[1] = {Position(0,2), Position(1,2), Position(2,2), Position(3,2)};
            cells[2] = {Position(2,0), Position(2,1), Position(2,2), Position(2,3)};
            cells[3] = {Position(0,1), Position(1,1), Position(2,1), Position(3,1)};
            Move(-1,3); // Adjust initial position to center the block
        }
};

class SqBlock :public Block{
// a class "LBlock" that inherets the public properties of the Block class
    public:
        SqBlock(){
            id = 4;
            cells[0] = {Position(0,0), Position(0,1), Position(1,0), Position(1,1)};
            Move(0,4); // Adjust initial position to center the block
        }
};

class SBlock :public Block{
// a class "LBlock" that inherets the public properties of the Block class
    public:
        SBlock(){
            id = 5;
            cells[0] = {Position(0,1), Position(0,2), Position(1,0), Position(1,1)};
            cells[1] = {Position(0,1), Position(1,1), Position(1,2), Position(2,2)};
            Move(0,3); // Adjust initial position to center the block
        }
};

class TBlock :public Block{
// a class "LBlock" that inherets the public properties of the Block class
    public:
        TBlock(){
            id = 6;
            cells[0] = {Position(0,1), Position(1,0), Position(1,1), Position(1,2)};
            cells[1] = {Position(0,1), Position(1,1), Position(1,2), Position(2,1)};
            cells[2] = {Position(1,0), Position(1,1), Position(1,2), Position(2,1)};
            cells[3] = {Position(0,1), Position(1,0), Position(1,1), Position(2,1)};
            Move(0,3); // Adjust initial position to center the block
        }
};

class ZBlock :public Block{
// a class "LBlock" that inherets the public properties of the Block class
    public:
        ZBlock(){
            id = 7;
            cells[0] = {Position(0,0), Position(0,1), Position(1,1), Position(1,2)};
            cells[1] = {Position(0,2), Position(1,1), Position(1,2), Position(2,1)};
            Move(0,3); // Adjust initial position to center the block
        }
};
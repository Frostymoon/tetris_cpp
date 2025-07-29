# Tetris Game in C++

A classic Tetris implementation using C++ and Raylib graphics library.

## Description

This project is a fully functional Tetris game that features:
- Standard Tetris pieces (tetrominoes)
- Block rotation and movement
- Score tracking
- Grid-based gameplay
- Color-coded pieces

## Dependencies

- C++ compiler (C++11 or later)
- Raylib graphics library
- CMake (for building)

## Project Structure

```
tetris_cpp/
├── src/
│   ├── block.h
│   ├── block_init.cpp
│   ├── block_pieces.cpp
│   ├── colors.h
│   ├── grid.h
│   ├── grid.cpp
│   ├── position.h
│   └── main.cpp
├── CMakeLists.txt
└── README.md
```

## Building and Running

1. Clone the repository:
```bash
git clone https://github.com/yourusername/tetris_cpp.git
```

2. Create a build directory:
```bash
cd tetris_cpp
mkdir build
cd build
```

3. Build the project:
```bash
cmake ..
make
```

4. Run the game:
```bash
./tetris
```

## Controls

- Left Arrow: Move piece left
- Right Arrow: Move piece right
- Down Arrow: Move piece down
- Up Arrow: Rotate piece




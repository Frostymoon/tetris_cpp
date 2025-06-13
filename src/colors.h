#pragma once
#include <raylib.h>
#include <vector>

extern const Color dark_grey;
extern const Color green;
extern const Color orange;
extern const Color yellow;
extern const Color purple;
extern const Color cyan;
extern const Color blue;
// ^ "extern" keyword used to make variables accessible across multiple files

std::vector<Color> GetCellColors();
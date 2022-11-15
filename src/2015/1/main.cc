#include "src/2015/1/aoc.h"
#include <fstream>
#include <iostream>

int main() {
    std::fstream f("data/2015/1/aoc_input", std::fstream::in);
    int floor = aoc::worker::calculateFloor(f);
    std::cout << floor << std::endl;
}

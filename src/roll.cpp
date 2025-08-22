//
// Created by DAKO Kenneth on 22/08/2025.
//
#include "../my.hpp"
using namespace std;

int my_roll(void) {
    std::srand(std::time(nullptr));
    return (std::rand() % 15) + 1;
}
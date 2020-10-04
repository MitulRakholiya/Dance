/*
    dance.cpp

    Single line ASCII dancer who dances forever
*/

#include <iostream>
#include <unistd.h>

useconds_t MOVE_SPEED = 500000;

const char* DANCE_MOVES[] = {
    "(>'-')>",
    "<('-'<)",
    "^('-')^",
    "v('-')v",
    "(>'-')>",
    " (^-^) "
}; 

int main() {

    // unbuffered output for std::cout
    std::cout.setf(std::ios::unitbuf);

    while (true) {
        for(int i = 0; i < 6; ++i) {
            std::cout << DANCE_MOVES[i] << '\r';
            usleep(MOVE_SPEED);
        }
      }

    return 0;
} 

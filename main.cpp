#include <iostream>
#include "String.h"

int main() {
    char *hello = new char[5];
    hello[0] = 'h';
    hello[1] = 'e';
    hello[2] = 'l';
    hello[3] = 'l';
    hello[4] = 'o';
    String *first = new String(hello, 5);
    char *world = new char[5];
    world[0] = 'w';
    world[1] = 'o';
    world[2] = 'r';
    world[3] = 'l';
    world[4] = 'd';
    String *second = new String(world, 5);
    String *third = new String();
    String *fourth = new String(*first);
    std::cout << *first << "\n" << *second << "\n" << *third<<"\n"<< fourth<<"\n"<<(*first+=*second)<<"\n"<<*first;
    return 0;
}

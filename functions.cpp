#include <iostream>

int move(int pos) {
    int newPos = pos + 1;
    return newPos;  
}

int main() {
    int pos = 0;
    pos = move(pos);
    std::cout << pos;
}
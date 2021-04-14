#include <iostream>

int main() {
    int age = 24; // 0x00
    int ageReference = age;

    int * agePtr = &age; // 0x00
    // int ageVal = * agePtr;

    std::cout << age << "\n";
    std::cout << * agePtr << "\n";

    age =21;

    std::cout << age << "\n";
    std::cout << * agePtr << "\n";
    // age = 25
    // std::cout << age << "\n";
    // std::cout << ageReference << "\n";
}
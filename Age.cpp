#include <iostream>

int main() {
    //Assignment=
    int age = 30;
    std::string firstName = "Julian";
    double accountBalance = 500.69;
    //Arithmaetic: = - * / %
    int newAge = age +1;
    age = age + 1;
    age += 1;
    d::string fullName = firstName + "Boolian";
    //Comparison: == != >= > <= <
    bool isOldEnough = age >= 18;
    bool doesNameMatch = firstName == "George";
    //Logical:&& || !
    bool isTooYoung = !isOldEnough;
    bool canBuyTicket = accountBalance >= 20 && isOldEnough;
    std::cout << isTooYoung;
}
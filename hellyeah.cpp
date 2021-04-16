#include <iostream>

class User {
    public:
    std::string name;
    int age;
    bool isLoggedIn;


    User(std::string n, int a) {
        name = n;
        age = a;
        isLoggedIn = true;
    }

    void changeLoginStatus() {
        isLoggedIn = !isLoggedIn;
    }
};

int main() {
    User user = User("Julian", 24);
    User user2 = User("Nimish", 27);
    std::cout << user.name << "\n";
    std::cout << user.age << "\n";
    std::cout << user.isLoggedIn << "\n";
    user.changeLoginStatus();
    std::cout << user.isLoggedIn << "\n";
}

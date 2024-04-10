#include <iostream>
using namespace std;
class MyClass {
private:
    int num;

public:
    MyClass(int n) : num(n) {}
    friend void displayNum(const MyClass& obj);
};

void displayNum(const MyClass& obj) {
    std::cout << "The number is: " << obj.num << std::endl;
}

int main() {
    int userInput;
    std::cout << "Enter a number: ";
    std::cin >> userInput;

    MyClass obj(userInput);
    displayNum(obj);

return 0;
}
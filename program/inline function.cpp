#include <iostream>
using namespace std;

class MyClass {
private:
    int num;

public:
    MyClass(int n) : num(n) {}
    inline void displayNum() {
        cout << "The number is: " << num << endl;
    }
};

int main() {
    int userInput;
    cout << "Enter a number: ";
    cin >> userInput;

    MyClass obj(userInput);
    obj.displayNum();

return 0;
}
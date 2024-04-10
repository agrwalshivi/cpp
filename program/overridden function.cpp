#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        Shape::draw(); // Call the base class's implementation of the draw() function
        cout << "Drawing a circle" << endl;
    }
};

int main() {
    Circle circle;
    circle.draw();

return 0;
}
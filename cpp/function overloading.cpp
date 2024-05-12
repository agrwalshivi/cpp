#include <iostream>

class Calculator {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function to add two double numbers
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    // Input two integers from the user and call the corresponding add function
    int x, y;
    std::cout << "Enter two integers: ";
    std::cin >> x >> y;
    std::cout << "Sum of " << x << " and " << y << " is: " << calc.add(x, y) << std::endl;

    // Input three integers from the user and call the corresponding add function
    int p, q, r;
    std::cout << "Enter three integers: ";
    std::cin >> p >> q >> r;
    std::cout << "Sum of " << p << ", " << q << " and " << r << " is: " << calc.add(p, q, r) << std::endl;

    // Input two double numbers from the user and call the corresponding add function
    double m, n;
    std::cout << "Enter two double numbers: ";
    std::cin >> m >> n;
    std::cout << "Sum of " << m << " and " << n << " is: " << calc.add(m, n) << std::endl;

    return 0;
}

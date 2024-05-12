#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor to initialize complex numbers
    Complex(double real, double imag) : real(real), imag(imag) {}

    // Overloading subtraction operator (-)
    Complex operator-(const Complex& other) const {
        double resultReal = real - other.real;
        double resultImag = imag - other.imag;
        return Complex(resultReal, resultImag);
    }

    // Function to display the complex number
    void display() const {
        std::cout << "(" << real << " + " << imag << "i)" << std::endl;
    }
};

int main() {
    double real1, imag1, real2, imag2;

    // Input first complex number from user
    std::cout << "Enter real and imaginary parts of first complex number: ";
    std::cin >> real1 >> imag1;

    // Input second complex number from user
    std::cout << "Enter real and imaginary parts of second complex number: ";
    std::cin >> real2 >> imag2;

    // Create complex number objects
    Complex c1(real1, imag1);
    Complex c2(real2, imag2);

    // Subtract c2 from c1 using overloaded subtraction operator
    Complex result = c1 - c2;

    // Display the result
    std::cout << "Result of subtraction: ";
    result.display();

    return 0;
}

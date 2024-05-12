#include <iostream>
#include <vector>
using namespace std;
class NegatePositiveNumbers {
public:
    NegatePositiveNumbers(std::vector<int>& arr) : array(arr) {}

    void negatePositiveNumbers() {
        // Iterate through the array and change positive numbers to negative
        for (int& num : array) {
            if (num > 0) {
                num = -num;
            }
        }
    }

    void printArray() {
        std::cout << "Modified array: ";
        for (int num : array) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

private:
    std::vector<int>& array;
};

int main() {
    std::vector<int> arr = {1, -2, 3, -4, 5};
    NegatePositiveNumbers negatePositive(arr);

    std::cout << "Original array:" << std::endl;
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    negatePositive.negatePositiveNumbers();

    negatePositive.printArray();

    return 0;
}

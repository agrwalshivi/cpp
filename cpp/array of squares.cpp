#include <iostream>
#include <vector>
using namespace std;
class ArraySquarer {
public:
    ArraySquarer(std::vector<int>& arr) : array(arr) {}

    void squareArrayElements() {
        // Iterate through the array and square each element
        for (int& num : array) {
            num = num * num;
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
    std::vector<int> arr = {1, 2, 3, 4, 5};
    ArraySquarer arraySquarer(arr);

    std::cout << "Original array:" << std::endl;
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    arraySquarer.squareArrayElements();

    arraySquarer.printArray();

    return 0;
}

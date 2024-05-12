#include <iostream>
#include <vector>
using namespace std;
class ArrayInsertion {
public:
    ArrayInsertion(std::vector<int>& arr) : array(arr) {}

    void insertElementAtIndex(int index, int element) {
        // Check if the index is valid
        if (index < 0 || index > array.size()) {
            std::cout << "Invalid index!" << std::endl;
            return;
        }

        // Insert the element at the specified index
        array.insert(array.begin() + index, element);
    }

    void printArray() {
        std::cout << "Array elements: ";
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
    ArrayInsertion arrayInsertion(arr);

    std::cout << "Original array:" << std::endl;
    arrayInsertion.printArray();

    int index = 2; // Index to insert element
    int element = 10; // Element to insert
    arrayInsertion.insertElementAtIndex(index, element);

    std::cout << "Array after inserting " << element << " at index " << index << ":" << std::endl;
    arrayInsertion.printArray();

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;
class ArrayDeletion {
public:
    ArrayDeletion(std::vector<int>& arr) : array(arr) {}

    void deleteElementAtIndex(int index) {
        // Check if the index is valid
        if (index < 0 || index >= array.size()) {
            std::cout << "Invalid index!" << std::endl;
            return;
        }

        // Erase the element at the specified index
        array.erase(array.begin() + index);
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
    ArrayDeletion arrayDeletion(arr);

    std::cout << "Original array:" << std::endl;
    arrayDeletion.printArray();

    int index = 2; // Index to delete element
    arrayDeletion.deleteElementAtIndex(index);

    std::cout << "Array after deleting element at index " << index << ":" << std::endl;
    arrayDeletion.printArray();

    return 0;
}

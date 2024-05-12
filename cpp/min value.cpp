#include <iostream>
using namespace std;
class MinValueFinder {
private:
    int *arr; 
    int size; 

public:
    MinValueFinder(int arr[], int size) {
        this->arr = arr;
        this->size = size;
    }

    int findMinValue() {
        if (size == 0) {
            std::cerr << "Array is empty!" << std::endl;
            return INT_MAX;
        }

        int minVal = arr[0]; 
        for(int i = 1; i < size; ++i) {
            if (arr[i] < minVal) {
                minVal = arr[i];
            }
        }

        return minVal;
    }
};

int main() {
    int arr[] = {5, 9, 3, 7, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    MinValueFinder minValue(arr, size);

    int minVal = minValue.findMinValue();

    std::cout << "The minimum value in the array is: " << minVal << std::endl;

    return 0;
}

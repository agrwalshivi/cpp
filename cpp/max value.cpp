#include <iostream>

class MaxValueFinder {
private:
    int *arr; 
    int size; 

public:
    
    MaxValueFinder(int arr[], int size) {
        this->arr = arr;
        this->size = size;
    }

    int findMaxValue() {
        if (size == 0) {
           
            std::cerr << "Array is empty!" << std::endl;
            return INT_MIN; 
        }

        int maxVal = arr[0]; 
        for(int i = 1; i < size; ++i) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }

        return maxVal;
    }
};

int main() {
    int arr[] = {5, 9, 3, 7, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    MaxValueFinder maxValue(arr, size);

    int maxVal = maxValue.findMaxValue();

    std::cout << "The maximum value in the array is: " << maxVal << std::endl;

    return 0;
}

#include <iostream>

class ArrayAverageCalculator {
private:
    int *arr; 
    int size; 
public:

    ArrayAverageCalculator(int arr[], int size) {
        this->arr = arr;
        this->size = size;
    }

    double calculateAverage() {
        if (size == 0) {
            return 0.0; 
        }
        int sum = 0;
        for(int i = 0; i < size; ++i) {
            sum += arr[i];
        }

        return static_cast<double>(sum) / size;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    ArrayAverageCalculator arrayAvg(arr, size);

    double avg = arrayAvg.calculateAverage();

    std::cout << "The average of the array elements is: " << avg << std::endl;

    return 0;
}

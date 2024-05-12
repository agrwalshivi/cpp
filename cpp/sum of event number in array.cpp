#include <iostream>
#include <vector>
using namespace std;
class EvenNumberSummer {
public:
    EvenNumberSummer(const std::vector<int>& arr) : array(arr) {}

    int calculateSumOfEvenNumbers() {
        int sum = 0;

        // Iterate through the array and add even numbers to the sum
        for (int num : array) {
            if (num % 2 == 0) {
                sum += num;
            }
        }

        return sum;
    }

private:
    std::vector<int> array;
};

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    EvenNumberSummer summer(arr);
    int sum = summer.calculateSumOfEvenNumbers();

    std::cout << "Sum of even numbers in the array: " << sum << std::endl;

    return 0;
}

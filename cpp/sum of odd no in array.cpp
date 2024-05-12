#include <iostream>
#include <vector>
using namespace std;
class OddNumberSummer {
public:
    OddNumberSummer(const std::vector<int>& arr) : array(arr) {}

    int calculateSumOfOddNumbers() {
        int sum = 0;

        for (int num : array) {
            if (num % 2 != 0) {
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
    OddNumberSummer summer(arr);
    int sum = summer.calculateSumOfOddNumbers();

    std::cout << "Sum of odd numbers in the array: " << sum << std::endl;

    return 0;
}

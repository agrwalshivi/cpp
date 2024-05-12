#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class SecondLargestFinder {
public:
    SecondLargestFinder(const std::vector<int>& arr) : array(arr) {}

    int findSecondLargest() {
        int largest = INT_MIN;
        int secondLargest = INT_MIN;

        for (int num : array) {
            if (num > largest) {
                secondLargest = largest;
                largest = num;
            } else if (num > secondLargest && num != largest) {
                secondLargest = num;
            }
        }

        return secondLargest;
    }

private:
    std::vector<int> array;
};

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 2, 4, 6, 8};
    SecondLargestFinder finder(arr);
    int secondLargest = finder.findSecondLargest();

    if (secondLargest == INT_MIN) {
        std::cout << "There is no second largest element in the array." << std::endl;
    } else {
        std::cout << "The second largest element in the array is: " << secondLargest << std::endl;
    }

    return 0;
}

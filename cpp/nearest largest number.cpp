#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class NearestLargerFinder {
public:
    NearestLargerFinder(const std::vector<int>& arr) : array(arr) {}

    std::vector<int> findNearestLargerNumbers() {
        std::vector<int> result(array.size(), -1);

        std::stack<int> indicesStack;

        for (int i = array.size() - 1; i >= 0; --i) {
            while (!indicesStack.empty() && array[i] >= array[indicesStack.top()]) {
                indicesStack.pop();
            }
            if (!indicesStack.empty()) {
                result[i] = array[indicesStack.top()];
            }
            indicesStack.push(i);
        }

        return result;
    }

    void printVector(const std::vector<int>& vec) {
        for (int num : vec) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

private:
    std::vector<int> array;
};

int main() {
    std::vector<int> arr = {4, 5, 2, 10, 8};
    NearestLargerFinder finder(arr);

    std::vector<int> nearestLargerNumbers = finder.findNearestLargerNumbers();

    std::cout << "Nearest larger numbers to the right for each element in the array: ";
    finder.printVector(nearestLargerNumbers);

    return 0;
}

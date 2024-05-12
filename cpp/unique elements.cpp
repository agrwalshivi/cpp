#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class UniqueElementsFinder {
public:
    UniqueElementsFinder(const std::vector<int>& arr) : array(arr) {}

    void findUniqueElements() {
        std::unordered_set<int> uniqueSet;

        for (int element : array) {
            uniqueSet.insert(element);
        }

        std::cout << "Unique elements in the array are: ";
        for (int uniqueElement : uniqueSet) {
            std::cout << uniqueElement << " ";
        }
        std::cout << std::endl;
    }

private:
    std::vector<int> array;
};

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 2, 3, 5, 6, 6, 7};
    UniqueElementsFinder finder(arr);
    finder.findUniqueElements();

    return 0;
}

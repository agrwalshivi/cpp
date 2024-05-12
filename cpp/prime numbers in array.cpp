#include <iostream>
#include<vector>
using namespace std;

class PrimeNumberCounter {
public:
    PrimeNumberCounter(const std::vector<int>& arr) : array(arr) {}

    int countPrimeNumbers() {
        int count = 0;

        // Iterate through the array and check each number for primality
        for (int num : array) {
            if (isPrime(num)) {
                count++;
            }
        }

        return count;
    }

private:
    std::vector<int> array;

    bool isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    PrimeNumberCounter counter(arr);
    int primeCount = counter.countPrimeNumbers();

    std::cout << "Number of prime numbers in the array: " << primeCount << std::endl;

    return 0;
}

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;           // 0, 1, negative numbers are not prime
    if (n == 2) return true;            // 2 is the only even prime
    if (n % 2 == 0) return false;       // eliminate other even numbers

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Function to calculate sum of primes in range [L, R]
int sumPrimesInRange(int L, int R) {
    if (L > R) swap(L, R); // Ensure L <= R

    int sum = 0;
    for (int i = L; i <= R; ++i) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int L, R;
    cout << "Enter the lower and upper range: ";
    cin >> L >> R;

    int result = sumPrimesInRange(L, R);
    cout << "Sum of prime numbers between " << L << " and " << R << " is: " << result << endl;

    return 0;
}

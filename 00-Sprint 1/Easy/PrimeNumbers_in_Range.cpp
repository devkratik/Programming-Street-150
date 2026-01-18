#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }

    return true;
}

// Function to print all prime numbers in range [L, R]
void printPrimesInRange(int L, int R) {
    if (L > R) {
        cout << "Invalid range: L > R\n";
        return;
    }

    cout << "Prime numbers between " << L << " and " << R << ":\n";
    bool found = false;
    for (int i = L; i <= R; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) cout << "None";
    cout << endl;
}

int main() {
    int L, R;
    cout << "Enter lower and upper range: ";
    cin >> L >> R;
    printPrimesInRange(L, R);
    return 0;
}

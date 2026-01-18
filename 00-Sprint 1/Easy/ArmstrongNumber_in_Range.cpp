#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is Armstrong
bool isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = 0;

    // Handle negative numbers
    if (num < 0) return false;

    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

// Function to print Armstrong numbers in range [L, R]
void printArmstrongInRange(int L, int R) {
    if (L > R) swap(L, R);

    bool found = false;
    for (int i = L; i <= R; ++i) {
        if (isArmstrong(i)) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "No Armstrong numbers in the given range.";
    }
    cout << endl;
}

int main() {
    int L, R;
    cout << "Enter range (L R): ";
    cin >> L >> R;

    cout << "Armstrong numbers in range [" << L << ", " << R << "]: ";
    printArmstrongInRange(L, R);

    return 0;
}

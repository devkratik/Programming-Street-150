#include <iostream>
using namespace std;

// Function to calculate sum of odd numbers in a range [L, R]
int sumOfOddNumbers(int L, int R) {
    if (L > R) swap(L, R); // Ensure L <= R

    int sum = 0;
    for (int i = L; i <= R; ++i) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int L, R;
    cout << "Enter the lower and upper limits: ";
    cin >> L >> R;

    int result = sumOfOddNumbers(L, R);
    cout << "Sum of odd numbers between " << L << " and " << R << " is: " << result << endl;

    return 0;
}

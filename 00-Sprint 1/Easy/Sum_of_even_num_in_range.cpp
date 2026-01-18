#include <iostream>
using namespace std;

// Function to calculate sum of even numbers in range [L, R]
int sumEvenInRange(int L, int R) {
    if (L > R) swap(L, R); // Handle L > R by swapping

    int sum = 0;
    for (int i = L; i <= R; ++i) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int L, R;
    cout << "Enter the lower and upper range: ";
    cin >> L >> R;

    int result = sumEvenInRange(L, R);

    cout << "Sum of even numbers between " << L << " and " << R << " is: " << result << endl;

    return 0;
}

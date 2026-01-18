#include <iostream>
using namespace std;

// Function to print zigzag pattern of numbers in rows.
void zigzagPattern(int n) {
    int count = 1;
    for (int row = 0; row < n; row++) {
        if (row % 2 == 0) {
            // Left to Right
            for (int col = 0; col < n; col++) {
                cout << count++ << " ";
            }
        } else {
            // Right to Left
            int temp = count + n - 1;
            for (int col = 0; col < n; col++) {
                cout << temp-- << " ";
                count++;
            }
        }
        cout << endl;
    }
}

int main() {
    int row;
    cin >> row;  // Only one input for rows and columns (square matrix)
    zigzagPattern(row);
    return 0;
}

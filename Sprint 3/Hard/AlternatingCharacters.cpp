#include <iostream>
using namespace std;

// Function to print alternating characters pattern.
void alternatingCharacters(int n) {
  char ch = 65;
  char ch1 = 67;
  for (int row = 0; row < n; row++) {
    for (int col = 0; col < n; col++) {
      if ((row % 2 == 0 && col % 2 == 0) || (row % 2 != 0 && col % 2 != 0)) {
        cout << ch << " ";
      } else {
        cout << ch1 << " ";
      }
    }
    cout << endl;
  }
}

int main() {
  int rows;
  cin >> rows;
  alternatingCharacters(rows);
  return 0;
}
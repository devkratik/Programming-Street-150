#include <iostream>
using namespace std;

// Function to print character pyramid.
void characterPyramid(int n) {
  char ch = 65;
  for (int row = 0; row < n; row++) {
    // spaces:
    for (int col = 0; col < n - (row + 1); col++) {
      cout << " " << " ";
    }
    // character:
    for (int col = 0; col < 2 * row + 1; col++) {
      cout << ch++ << " ";
    }
    cout << endl;
  }
}

int main() {
  int row;
  cin >> row;
  characterPyramid(row);
  return 0;
}
#include <iostream>
using namespace std;

// Function to find out the sum of series:
double seriesSum(int n) {
  double sum = 0;
  for (double index = 1; index <= n; index++) {
    sum = sum + (1.0 / index);
  }
  return sum;
}

int main() {
  int n;
  cin >> n;
  cout << "Sum of the series is: " << seriesSum(n);
  return 0;
}
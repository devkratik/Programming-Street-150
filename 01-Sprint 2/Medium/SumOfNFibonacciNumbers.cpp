#include <iostream>
using namespace std;

// Function to print sum of N fibonacci numbers.
int fibonacciNumberSum(int n) {
  int n1 = 0;
  int n2 = 1;
  int count = 0;
  int sum = 0;
  while (count < n) {
    sum += n1;
    int next = n1 + n2;
    n1 = n2;
    n2 = next;
    count++;
  }
  return sum;
}

int main() {
  int n;
  cin >> n;

  cout << fibonacciNumberSum(n);

  return 0;
}

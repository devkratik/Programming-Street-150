#include <iostream>
using namespace std;

int getNPrimeSum(int N) {
  int sum = 0;
  int i = 2;
  int count = 0;
  while (count < N) {
    bool isPrime = true;
    for (int index = 2; index < i; index++) {

      if (i % index == 0) {
        isPrime = false;
        break;
      }
    }

    if (isPrime) {
      sum += i;
      count++;
    }
    i++;
  }
  return sum;
}

int main() {

  int n;

  cin >> n;
  cout << getNPrimeSum(n);
  return 0;
}
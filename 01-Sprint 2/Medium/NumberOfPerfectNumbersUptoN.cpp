#include <iostream>
using namespace std;

// Function to count perfect numbers upto N.
int countPerfectNumbers(int N) {
  int count = 0;
  for (int index = 2; index <= N; index++) {
    int sum = 0;
    for (int itr = 1; itr < index; itr++) {
      if (index % itr == 0) {
        sum += itr;
      }
    }
    if (sum == index) {
      count++;
    }
  }
  return count;
}

int main() {
  int n;
  cin >> n;
  cout << countPerfectNumbers(n);
  return 0;
}

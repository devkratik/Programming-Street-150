#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num = 2;
    int sum = 0;
    int count = 0;

    while (count < n) {
        sum += num;
        num += 2;  
        count++;
    }

    cout << sum;
    return 0;
}

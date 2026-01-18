#include <iostream>
using namespace std;

// Function to calculate the power :
long long evaluatePower(int base , int expo){
    long long ans = 1;  // Use long long for bigger results
    for (int i = 0; i < expo; i++) {
        ans *= base;
    }
    return ans;
}

int main() {
    int base, exponent;
    cin >> base >> exponent;

    // Handle special cases
    if (base == 0 && exponent == 0) {
        cout << "Undefined (0^0)" << endl;
        return 0;
    }
    if (exponent == 0) {
        cout << 1 << endl;
        return 0;
    }

   

    cout << evaluatePower(base,exponent) << endl;
    return 0;
}

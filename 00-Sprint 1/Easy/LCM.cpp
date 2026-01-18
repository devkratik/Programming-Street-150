#include <iostream>
using namespace std;

// Function to calculate GCD optimally.
int GCD(int n1, int n2)
{
    while (n2 != 0)
    {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    return n1;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    // Taking abs if numbers are negative:
    num1 = abs(num1);
    num2 = abs(num2);
    // Check for zero:
    if (num1 == 0 || num2 == 0)
    {
        cout << "LCM is 0 because one of the numbers is 0.";
        return 0;
    }

    long long ans = (1LL* num1 * num2) / GCD(num1, num2);
    cout << ans;

    return 0;
}

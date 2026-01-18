#include <iostream>
using namespace std;

// Function to calculate sum of prime factors of a number:
int primeFactorSum(int num)
{
    int sum = 0;
    for (int index = 2; index < num; index++)
    {
        int flag = 0;
        for (int itr = 2; itr < index; itr++)
        {

            if (index % itr == 0)
            {
                flag = 1;
                break;
            }
            else
            {
                continue;
            }
        }
        if (flag == 0 && num % index == 0)
        {
            sum += index;
        }
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << "Sum of prime factors of " << n << " is " << primeFactorSum(n);
    return 0;
}
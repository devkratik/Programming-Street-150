#include <iostream>
using namespace std;

// Function to print factorial of a number.
long long factorial(int num)
{

    long long fact = 1;
    for (int index = num; index >= 1; index--)
    {
        fact = fact * index;
    }
    return fact;
}

int main()
{
    int num;
    cin >> num;
    if (num < 0)
    {
        cout<<"Please enter a valid number for factorial!";
        return 1;
    }
    else if(num == 0){
    cout << "Factorial of " << num << " is " << 1;
    return 0;
    }
    long long ans = factorial(num);
    cout << "Factorial of " << num << " is " << ans;
    return 0;
}
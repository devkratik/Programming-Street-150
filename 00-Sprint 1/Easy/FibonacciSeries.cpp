#include <iostream>
using namespace std;

// Function to print fibonacci series upto a limit number.
void fibonacciSeries(int limit)
{
    if (limit == 0)
    {
        cout << 0;
    }
    else if (limit == 1)
    {
        cout << 0 << " " << 1 << endl;
    }
    else
    {
        int n1 = 0;
        int n2 = 1;
        cout << n1 << " " << n2 << " ";
        while (n1 + n2 <= limit)
        {
            int next = n1 + n2;
            cout << next << " ";
            n1 = n2;
            n2 = next;
        }
    }
}

int main()
{
    int limit;
    cin >> limit;
    if (limit < 0)
    {
        cout << "Enter a non-negative limit.";
        return 0;
    }

    fibonacciSeries(limit);
    return 0;
}
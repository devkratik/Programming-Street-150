#include <iostream>
#include <math.h>
using namespace std;

// Function to print perfect square in a given range.
int perfectSquareInRange(int start, int end)
{
    double sqrRoot;
    for (int index = start; index <= end; index++)
    {
        sqrRoot = (int)sqrt(index);
        if (index == (sqrRoot * sqrRoot))
        {
            cout << index << " ";
        }
    }
}

int main()
{
    int start, end;
    cin >> start >> end;
    perfectSquareInRange(start , end);
    return 0;
}
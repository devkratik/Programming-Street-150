#include <iostream>
using namespace std;

/* Naive approach will be to use loop for each element ,
the rest of the array and count it if same but will take o(n)
time ans o(n) space*/

// Function to find out number that is appearing only once using XOR:
int getNumber(int arr[], int size)
{

    if (size == 0)
    {
        cout << "Invalid input: empty array\n";
        return -1;
    }

    long long ans = 0; 
    for (int index = 0; index < size; index++)
    {
        ans = ans ^ arr[index]; // only single appearance will remain
    }

    // Optional: Check if ans is actually in array exactly once
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ans)
            count++;
    }

    if (count == 1)
        return ans;
    else
        return -1; // no valid unique number
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int index = 0; index < n; index++)
        cin >> arr[index];
    cout << getNumber(arr, n);
    return 0;
}
#include <iostream>
using namespace std;

// Function to print diamond pattern.
void diamondPattern(int n)
{
    for (int row = 0; row < n; row++)
    {
        // space:
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " " << " ";
        }
        // stars:
        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    // Inverted :
    for (int row = 0; row < n - 1; row++)
    {
        // spaces:
        for (int col = 0; col < row + 1; col++)
        {
            cout << " " << " ";
        }
        // stars:
        for (int col = 0; col < 2 * n - (2 * row + 3); col++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows;
    cin >> rows;
    diamondPattern(rows);
    return 0;
}
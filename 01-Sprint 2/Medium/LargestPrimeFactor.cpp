#include <iostream>
using namespace std;

int largestPrimeFactor(int num)
{
    int factor = 1;

    for (int index = 2; index <= num; index++)
    { // ✅ go till num, not sqrt(num)
        bool isPrime = true;

        for (int i = 2; i * i <= index; i++)
        { // prime check optimized
            if (index % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime && num % index == 0)
        {                   // ✅ don't need index > factor check
            factor = index; // ✅ this will auto keep largest
        }
    }

    return factor;
}

int main()
{
    int n;
    cin >> n;
    cout << "Largest Prime factor of " << n << " is " << largestPrimeFactor(n);
    return 0;
}

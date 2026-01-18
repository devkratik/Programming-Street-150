#include <iostream>
using namespace std;

// Function to check a number is even or odd.
// void evenOdd(int num)
// {
//    if (num % 2 == 0)
//    {
//       cout << num << " is an Even Number" << endl;
//    }
//    else
//    {
//       cout << num << " is an Odd Number" << endl;
//    }
// }

bool evenOdd(int num)
{
   return num&1;
}

int main()
{

   int N;
   cin >> N;
   if(!evenOdd(N)){
      cout<<"even"<<endl;
   }
   else{
      cout<<"Odd"<<endl;
   }
   return 0;
}
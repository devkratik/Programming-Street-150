#include <iostream>
using namespace std;

// Function to calculate factorial:
int factorial(int num){
    int fact = 1;
    while(num>=1){
        fact*=num;
        num--;
    }
    return fact;
}

// Function to calculate sum of digits of factorial
int factDigitSum(int num){
   int sum = 0;
   int fact = factorial(num);
   while(fact!=0){
    int rem = fact%10;
    sum+=rem;
    fact /=10;
   }
   return sum;
}

int main() {
    int N;
    cin>>N;
    cout<<factDigitSum(N);
    return 0;
}
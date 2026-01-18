#include <iostream>
using namespace std;

// Function to calculate the count of specific digit in a number.
int countSpecificDigit(int num , int digit){
    int count = 0 ;
    while(num!=0){
        int rem = num%10;
        if(rem == digit){
            count++;
        }
        num/=10;
    }
    return count;
}

int main() {
    int num,digit;
    cin>>num>>digit;

    cout<<digit<<" occurs "<<countSpecificDigit(num,digit)<<" times in "<<num;
    
    return 0;
}
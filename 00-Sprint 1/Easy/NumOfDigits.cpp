#include <iostream>
using namespace std;
//Function to calculate number of digits.
int numOfDigits(int num){
    if(num ==0)
    return 1;
    int count = 0;
    while(num!=0){
        int rem = num%10;
        count++;
        num/=10;
    }
    return count;
}

int main() {
 
    int num;
    cin>>num;
    cout<<numOfDigits(num);
    return 0;
}
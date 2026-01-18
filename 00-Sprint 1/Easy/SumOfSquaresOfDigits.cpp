#include <iostream>
using namespace std;

// Function to calculate sum of squares of digits of a number.
int SquareDigitSum(int num){
    int temp = num;
    int sum =0;
    while(temp!=0){
        int rem = temp%10;
        sum = sum + (rem*rem);
        temp = temp/10; 
    }
    return sum;
}

int main() {
    int n;
    cin>>n;
    int ans = SquareDigitSum(n);
    cout<<ans;
    return 0;
}
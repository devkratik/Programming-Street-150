#include <iostream>
using namespace std;

//Function to calculate sum of digits of a number.
int DigitSum(int num){
    int temp = num;
    int sum = 0 ; 
    while(temp!=0){
        int digit  = temp%10;
        sum = sum+digit;
        temp = temp/10;
    }
    return sum;
}

int main() {
    int n;
    cin>>n;
    int ans = DigitSum(n);
    cout<<"Sum of digits of "<<n<<" is "<<ans;
    return 0;
}
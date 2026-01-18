#include <iostream>
using namespace std;

//Function to count unique digits in a number.
int uniqueDigits(int num){
    int count = 0;
    int x;
    while(num!=0){
        int rem = num%10;
        if(rem!=x){
            count++;
        }
        num/=10;
        x = rem;
    }
    return count;
}

int main() {
    int n;
    cin>>n;
    cout<<n<<" has "<<uniqueDigits(n)<<" unique digits.";

    return 0;
}
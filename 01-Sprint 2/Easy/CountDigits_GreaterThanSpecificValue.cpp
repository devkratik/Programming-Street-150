#include <iostream>
using namespace std;

//Function to count digit greater than specific value.
int countGreaterDigits(int num , int value){
    int count = 0;
    while(num!=0){
        int rem = num%10;
        if(rem>value){
            count++;
        }
        num /=10;
    }
   return count;
}

int main() {
    int num;
    cin>>num;
    int value;
    cin>>value;
   int ans =  countGreaterDigits(num , value);
    cout<<ans;
    return 0;
}
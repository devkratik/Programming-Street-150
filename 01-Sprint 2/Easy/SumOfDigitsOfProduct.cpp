#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    cin>>num1>>num2;
    int productNum = num1 * num2;
    int temp = productNum;
    int rem ;
    int sum = 0 ;
    while(temp!=0){
        rem = temp%10;
        sum = sum+rem;
        temp = temp/10;
    }
    cout<<sum;

    return 0;
}
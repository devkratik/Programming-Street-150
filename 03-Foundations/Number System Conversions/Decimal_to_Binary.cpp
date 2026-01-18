#include <iostream>
#include<math.h>
using namespace std;
//Function to convert decimal into binary(Divison method):
int  decimalToBinaryMethod1(int num){
    int binaryNum = 0;
    int i=0;
    while(num!=0){
        
        int bit = num%2;
        binaryNum = (bit*pow(10,i++)+binaryNum);
        num/=2;
    }
    return binaryNum;
}

//Function to convert decimal to binary using bitwise:
int  decimalToBinaryMethod2(int num){
    if(num < 0){
        cout << "Negative numbers not supported\n";
        return -1;
    }
    int binaryNum = 0;
    int i=0;
    while(num!=0){        
        int bit = num & 1;
        binaryNum = (bit*pow(10,i++)+binaryNum);
        num = num>>1;
    }
    return binaryNum;
}

int main() {
    int num;
    cin>>num;
    cout<<"Using Divison:"<<decimalToBinaryMethod1(num)<<endl;
    cout<<"Using Bitwise:"<<decimalToBinaryMethod2(num)<<endl;
    return 0;
}
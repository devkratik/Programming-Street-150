#include <iostream>
#include<math.h>
using namespace std;

// //Function to convert Binary to Decimal:
// int binaryToDecimalMethod(int num){
//     int decimalNum = 0 ;
//     int i= 0 ;
//     while(num!=0){
//         int bit = num%10;
//     if(bit != 0 && bit != 1) {
//     cout << "Invalid binary number\n";
//     return -1;
// }
//         decimalNum = bit*pow(2,i++)+decimalNum; 
//         num= num/10;
//     }
//     return decimalNum;
// }

/* Edge case checked & for large binary int overflows so uaed string */
/*

int binaryToDecimalString(string binary) {
    int decimal = 0;
    for (int i = 0; i < binary.length(); i++) {
        char bit = binary[binary.length() - 1 - i];
        if(bit != '0' && bit != '1') {
            cout << "Invalid binary input\n";
            return -1;
        }
        decimal += (bit - '0') * pow(2, i);
    }
    return decimal;
}


*/

//Function to convert Binary to Decimal:
int binaryToDecimalMethod(int num){
    int decimalNum = 0 ;
    int i= 0 ;
    while(num!=0){
        if(num & 1) // checking if last bit is 1
         decimalNum+=(1<<i); // adding 2's power to decimal
        num = num>>1;
        i++;
    }
    return decimalNum;
}
 
int main() {
    
    int num;
    cin>>num;
    cout<<binaryToDecimalMethod(num)<<endl;
    return 0;
}
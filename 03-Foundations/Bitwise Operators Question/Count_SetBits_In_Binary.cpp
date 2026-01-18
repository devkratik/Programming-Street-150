#include <iostream>
using namespace std;

//Function to count the set bit in a number:
// int countSetBit(int num){
//     int count = 0 ;
//     while(num>0){
//         if(num&1){
//             count++;
//         }
//         num=num>>1;
//     }
//  return count;
// }

//Optimized:
int countSetBit(int num){
    int count = 0 ;
    while(num>0){
        num = num&(num-1); // it removes last set bit everytime.
        count++;
    }
    return count;
}

int main() {
    int num;
    cin>>num;
    cout<<countSetBit(num);
    return 0;
}
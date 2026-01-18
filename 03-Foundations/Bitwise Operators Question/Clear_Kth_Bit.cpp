#include <iostream>
using namespace std;

// Function to clear the Kth bit of a number.
int clearKthBit(int num , int k){
    if(k>=32 || k<0) {
        cout<<"Undefined Bit position ";
        return 0;
    }
    return num & ~(1<<k);
}

int main() {
    int n,k;
    cin>>n>>k;
   cout<<clearKthBit(n,k);
    return 0;
}
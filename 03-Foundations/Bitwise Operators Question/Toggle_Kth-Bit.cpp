#include <iostream>
using namespace std;

//Function to toggle the kth bit of a number:
int toggleKthBit(int num , int k){
    if(k>=32 || k<0){
        cout<<"Undefined bit position ";
        return 0;
    }
    return num^(1<<k);
}

int main() {
    int n,k;
    cin>>n>>k;
    cout<<toggleKthBit(n,k);
    return 0;
}
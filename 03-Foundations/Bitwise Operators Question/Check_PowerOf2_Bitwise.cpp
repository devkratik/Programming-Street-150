#include <iostream>
using namespace std;

//Function to check that if a number is power of 2.
bool isPowerOfTwo(int n){
    if(n<=0) return false;
    return (n&(n-1)) == 0 ;
}

int main() {
    int num;
    cin>>num;
    if(isPowerOfTwo(num)){
        cout<<"True";
    }    
    else{
        cout<<"False";                      
    }
    return 0;
}                                                                            
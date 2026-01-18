#include <iostream>
using namespace std;

// Function to Set Kth Bit:
int set_Kth_Bit(int num , int k ){
    int mask = 1 << k;
    int ans = num | mask;
    return ans;
}

int main() {
    int n;
    cin>>n;
    int k;
    cin>>k;
   cout<<set_Kth_Bit(n,k);
    return 0;
}
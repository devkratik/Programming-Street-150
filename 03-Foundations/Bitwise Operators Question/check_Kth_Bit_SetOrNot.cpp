#include <iostream>
using namespace std;

//Check kth bit is set or not:
bool isSet(int num, int k){
    if(num&(1<<k))
    return true;
    else
    return false;
}

int main() {
    int n;
    cin>>n;
    int k;
    cin>>k;
    cout<<isSet(n,k);
    return 0;
}
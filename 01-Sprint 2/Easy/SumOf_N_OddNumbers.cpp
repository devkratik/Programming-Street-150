#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int count = 0 ;
    int sum = 0 ;
    int num = 1;
    while(count < n){
        if(num%2!=0){
            sum = sum+num;
            count++;
            num++;
        }
        else{
            num++;
            continue;
        }
        
    }
    cout<<sum;
    return 0;
}
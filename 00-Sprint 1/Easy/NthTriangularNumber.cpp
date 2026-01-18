#include <iostream>
using namespace std;

//Function to calculate Nth triangular number:
int triangularNum(int num){
    int sum = 0 ;
    for(int index = 1 ; index <= num ; index++ ){
        sum+=index;
    }
  return sum;
}

int main() {
    int N;
    cin>>N;
       
    cout<<N<<"th "<<"triangular number is: "<<triangularNum(N);

    return 0;
}
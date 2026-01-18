#include <iostream>
using namespace std;

// Function to calculate multiplication table:
void multiplicationTable(int num){
    int limit = 5;
    for(int index =1 ; index <=limit ; index++){
        cout<<num*index<<endl;
    }
}

int main() {
    int num;
    cin>>num;
    multiplicationTable(num);
    return 0;
}
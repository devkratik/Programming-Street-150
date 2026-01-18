#include <iostream>
using namespace std;

//Function to multiply by two using left shift <<
int multiplyBy2(int n){
    return n<<1;
}

int main() {
    int num;
    cin>>num;
    cout<<multiplyBy2(num);
    return 0;
}
#include <iostream>
using namespace std;

//Function to get fibonacci number at a specific position.
int fibonacciNumber(int position){
    int count = 2;
    int n1 = 0;
    int n2 = 1;
    int next;
    while(count <= position){
        next =n1+n2;
        n1 = n2;
        n2 = next;
        count++;
    }
    return n2;
}


int main()
{
    int position;
    cin>>position;
    // check for first two numbers :
    if(position == 0 ) {
        cout<<0;
        return 0;
    }
    else if(position == 1) {
        cout<<1;
        return 0;
    }
    // call the function:
    cout<<fibonacciNumber(position);
    return 0;
}
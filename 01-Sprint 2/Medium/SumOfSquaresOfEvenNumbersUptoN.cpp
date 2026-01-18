#include <iostream>
using namespace std;

// Function to calculate the sum of squares of even numbers upto N.
int evenNumberSquareSum(int n){
    int sum = 0 ;
    for(int index = 2 ; index <=n ; index++){

        if(index%2 == 0 ){
            sum+= (index*index);
        }
    }
    return sum;
}

int main() {
    int n;
    cin>>n;
    int sum = 0;
    cout<<"Sum of squares of even numbers upto "<<n<<" is "
    <<evenNumberSquareSum(n);    
    return 0;
}
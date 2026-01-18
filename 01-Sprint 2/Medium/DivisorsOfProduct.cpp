#include <iostream>
using namespace std;

// Function to calculate divisors of the product.
void divisorsOfProduct(int n1,int n2){
    int product=n1*n2;
    for(int index = 2 ; index < product ; index++){
        if(product%index == 0 ){
            cout<<index<<" ";
        }
    }
}

int main() {
    int num1,num2;
    cin>>num1>>num2;

    divisorsOfProduct(num1 , num2);
    
    return 0;
}
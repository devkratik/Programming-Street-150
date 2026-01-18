#include <iostream>
using namespace std;

// Function to calculate if a number is Perfect or not.
bool isPerfect(int n){
    if(n<=1){
        return false;
    }
    int sum =  0;
    for(int index = 1; index < n ; index++){
        if(n % index == 0){
            sum+=index;
        }
    }
    if(sum == n){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int num;
    cin>>num;
    
    if(isPerfect(num)){
        cout<<"Yes, "<<num<<" is a Perfect number!";
    }
    else{
        cout<<num<<" is not a Perfect number!";
    }
    return 0;
}


/**
 * Optimized way to check only those divisors up to sqrt(n)
 * becasue above this every pair will be repeating 
 * 
 * bool isPerfect(int n) {
    if (n <= 1) return false;

    int sum = 1;  // 1 is a proper divisor of all numbers > 1
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }

    return sum == n;
}

 */
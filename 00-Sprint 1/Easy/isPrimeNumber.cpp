#include<iostream>
using namespace std;

// Function to check whether a number is prime or not.
bool isPrime(int num){
    if(num <= 1){
        return false;
    }
    for(int index = 2 ; index*index <= num ; index++){
        if(num % index == 0){
            return false;
        }
    }
 return true;

}

//Function to check is prime optimally:
bool checkPrimeOptimally(int num){
    //check first small values:
    if (n<=1)
    {
      return false;
    }
    if(n<=3){
        return true;
    }
    //now we know multiple of 2 & 3 can never be prime so to
    //make our code fast manually handle the case:
    if(n%2 == 0 || n%3 == 0){
        return false;
    }
    //now after 1 , 2 , 3 and 4(multiple of 2) , starting from 5:
    for(int index = 5; index*index<=num; index+=6){
        if(n%i == 0  ||n%(i+2) == 0 ){
            return false;
        }
    }
    return true;
}


int main(){
    
    int N;
    cin>>N;
    if(isPrime(N)){
        cout<<"Prime!";
    }
    else{
        cout<<"Non Prime!";
    }
    return 0;
}

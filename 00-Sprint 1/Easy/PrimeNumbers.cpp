#include <iostream>
using namespace std;

//Function to print all prime numbers less than given number.

void primeNumbers(int limit){
    for(int index = 2 ; index <= limit ; index++){
        bool isPrime = true;
        for(int num = 2; num < index ; num++){
            if(index % num == 0){
                isPrime = false;
                break;
            }           
        }
        if(isPrime){
            cout<<index<<" ";
        }
    }
}

int main() {

    int num;
    cin>>num;
    //Check for num less than 1
    if(num <= 1){
        cout<<"Enter number greater than 1 only!";
        return 0;
    }

    primeNumbers(num);

    return 0;
}
/* 
Instead of checking divisibility up to index - 1, you can optimize it by checking up to sqrt(index):

for(int num = 2; num * num <= index; num++)

*/
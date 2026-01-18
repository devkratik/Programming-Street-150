#include <iostream>
using namespace std;

//Function to calculate GCD of two numbers.
int GCD(int n1, int n2){
    // checking for zero input:
    if(n2 == 0 )
      return n1;
    else if(n1 == 0)
      return n2;
    while(n1!=n2){
        if(n1>n2){
            n1 = n1-n2;
        }
        else{
            n2 = n2-n1;
        }
    }
    return n2;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    // taking absolute values ico negative input:
    num1 = abs(num1);
    num2 = abs(num2);
    
    // Printing output:
    cout << "GCD is: " << GCD(num1,num2) << endl;
    return 0;
}

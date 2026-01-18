#include <iostream>
using namespace std;

//Function to calculate the sum of digits of a number until a single term.
int singleDigitSum(int num){
  int sum = 0 ; 
  int sum2 = 0;
  int rem ;
  int rem2;

  while(num!=0){
    rem = num%10;
    sum+=rem;
    if(sum>9){
      while(sum!=0){
      rem2 = sum%10;
      sum2 +=rem2;
      sum/=10;
      }
      sum = sum2;
    }
    num/=10;
  }
  return sum;
}


int main() {
    int n;
    cin>>n;
    int ans = singleDigitSum(n);
    cout<<"Single digit sum of "<<n<<" is "<<ans;
    return 0;
}


/* Use modulo 9 trick! */
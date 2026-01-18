#include <iostream>
#include <math.h>
using namespace std;

//Function to get the power manually(faster than pow function):
int getPower(int base , int expo){
  int res = 1 ; 
  while(expo--){
    res*=base;
  }
  return res;
}

//Function to count the number of digits of a number.
int numOfDigits(int num)
{
  int count = 0;
  while (num != 0)
  {
    count++;
    num /= 10;
  }
  return count;
}

//Function to calculate the sum of digits raised to app. power.
int isArmstrong(int num)
{
  int digitNum = numOfDigits(num);
  int sum = 0;
  while (num != 0)
  {
    int rem = num % 10;
    sum += pow(rem, digitNum);
    num /= 10;
  }
  return sum;
}

int main()
{
  int num;
  cin >> num;

  if(num < 0){
    cout<<"Enter valid number!";
    return 0;
  }

  if (isArmstrong(num) == num)
  {
    cout << "Armstrong Number";
  }
  else
  {
    cout << "Not an Armstrong Number";
  }
  return 0;
}
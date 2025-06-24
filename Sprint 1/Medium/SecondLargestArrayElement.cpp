#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int size){
       
       int largest = INT_MIN;
       int second = INT_MIN;

       for(int i = 0 ; i < size ; i++){
        if(arr[i]>largest){
             second = largest;
             largest = arr[i];
        }
        else if(arr[i]>second && arr[i]!=largest){
          second = arr[i];
        }
       }
       return second == INT_MIN ? -1 : second;
}


int main() {
  int n;
  cin>>n;
  
  int arr[n];
  for(int i = 0 ; i < n ; i++){
    cin>>arr[i];
  }

  int ans = secondLargest(arr , n);
  cout<<ans;


  return 0;
}
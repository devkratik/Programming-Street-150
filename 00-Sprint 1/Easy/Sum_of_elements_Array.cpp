#include <iostream>
using namespace std;

// Function to calculate the sum of array elements:
int elementSum(int arr[], int size){
    long long sum = 0 ;
    for(int index = 0 ; index < size ; index++){
        sum+=arr[index];
    }
    return sum;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int index = 0 ; index<n; index++){
        cin>>arr[index];
    }
    cout<<elementSum(arr, n);
    return 0;
}
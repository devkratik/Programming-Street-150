#include <iostream>
using namespace std;

//Function to calculate the average of array elements:
double getAverage(int arr[] ,int size ){
    if(size == 0 ) return 0;
    double avg = 0;
    long long sum = 0 ;
    for(int index = 0 ; index<size; index++){
       sum += arr[index];
    }
    return sum/(double)size;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int index = 0 ; index<n; index++){
        cin>>arr[index];
    }
    cout<<"Average is:"<<getAverage(arr , n);
    return 0;
}
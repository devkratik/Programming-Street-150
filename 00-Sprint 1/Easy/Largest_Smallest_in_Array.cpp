#include <bits/stdc++.h>
using namespace std;

// Pair function to find largest and smallest :
pair <int,int> getSmallestLargest(int arr[] , int size){
    int large = INT_MIN;
    int small = INT_MAX;

    for(int index = 0 ; index < size ; index++){
        if(arr[index]>large ){
            large = arr[index];
        }
        if(arr[index]<small){
            small = arr[index];
        }
    }
    pair<int,int> result = {small,large}; // { } is more readable than make_pair
    return result;
}


// //Function to find out smallest in array:
// int Large(int arr[] , int size){
//     int large = INT_MIN;
//     for(int index = 0 ; index < size ; index++){
//         if(arr[index] > large){
//             large = arr[index];
//         }
//     }
//     return large;
// }

// //Function to find out largest in array:
// int small(int arr[] , int size){
//     int small = INT_MAX;
//     for(int index = 0 ; index < size ; index++){
//         if(arr[index] < small){
//             small = arr[index];
//         }
//     }
//     return small;
// }

int main() {
    int n;
    cin>>n;
    int arr[n];
    // input array:
    for(int index = 0 ; index <n; index++)
        cin>>arr[index];
    
//cout<<"Largest:"<<Large(arr , n)<<" "<<"Smallest:"<<small(arr,n);
    pair<int,int> ans = getSmallestLargest(arr , n);
    cout<<"smallest:"<<ans.first<<" "<<"largest:"<<ans.second<<endl;
    return 0;
}
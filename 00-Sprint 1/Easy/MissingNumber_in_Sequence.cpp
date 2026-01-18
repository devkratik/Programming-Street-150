#include <iostream>
using namespace std;


/* optimized and handle all edge case */
int missingNumber(int arr[], int size){
    int totalSum = (size + 1)*(size + 2)/2; // since n=size+1
    int arrSum = 0;
    for(int i = 0; i < size; i++){
        arrSum += arr[i];
    }
    return totalSum - arrSum;
}


/* not optimized and dont handle edge cases */
// int missingNumber(int arr[], int size){
//     int ans;
//     int itr1 = 0;
//     int itr2 = 1;

//     while(itr1<itr2 && itr2<size){
//         if(arr[itr2] - arr[itr1] == 1){
//             itr1++;
//             itr2++;
//             continue;
//         }
//         else{
//             ans = arr[itr2]-1;
//             break;
//         }

//     }
// return ans;
// }

int main() {
    int n;
    cin>>n;
    
    int arr[n];
    for(int index = 0  ; index < n ; index++){
        cin>>arr[index];
    }
    cout<<missingNumber(arr,n);
    return 0;
}
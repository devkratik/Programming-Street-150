#include <iostream>
using namespace std;

/* Naive approach use loop but o(n^2) time */
// int getDuplicate(int arr[], int size){
//     for(int index=0; index<size; index++){
//         for(int itr=index+1; itr<size; itr++){
//             if(arr[index] == arr[itr])
//                 return arr[index];
//         }
//     }
//     return -1;
// }

int getDuplicate(int arr[], int size) {
    if (size <= 1) {
        cout << "Invalid input: Too few elements.\n";
        return -1;
    }

    // Validate input: All numbers should be in range [1, size-1]
    for (int i = 0; i < size; i++) {
        if (arr[i] < 1 || arr[i] >= size) {
            cout << "Invalid number in array: " << arr[i] << endl;
            return -1;
        }
    }

    int xorAll = 0;

    // XOR of all array elements
    for (int i = 0; i < size; i++) {
        xorAll ^= arr[i];
    }

    // XOR of numbers from 1 to n-1
    for (int i = 1; i <= size - 1; i++) {
        xorAll ^= i;
    }

    // Confirm the result appears twice
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == xorAll) count++;
    }

    if (count == 2) return xorAll;
    else {
        cout << "Invalid input: No or multiple duplicates.\n";
        return -1;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int duplicate = getDuplicate(arr, n);
    if (duplicate != -1)
        cout << "Duplicate number is: " << duplicate << endl;

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;

    int maxValue;
    cin >> maxValue;

    vector<int> arr(size);
    for(int index = 0; index < size; index++) {
        cin >> arr[index];
    }

    vector<int> hashArr(maxValue + 1, 0); // initialize with 0

    // Build frequency hash
    for(int index = 0; index < size; index++) {
        hashArr[arr[index]] += 1;
    }

    int numQueries;
    cin >> numQueries;

    while(numQueries--) {
        int num;
        cin >> num;
        cout << hashArr[num] << endl;
    }

    return 0;
}

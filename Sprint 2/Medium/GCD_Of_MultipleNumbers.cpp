#include <bits/stdc++.h>
using namespace std;

// Manually defined GCD function (Euclidean Algorithm)
long long getGCD(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long gcdOfArray(vector<int>& nums) {
    long long result = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        result = getGCD(result, nums[i]);
    }
    return result;
}

int main() {
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    long long ans = gcdOfArray(arr);
    cout << ans << endl;

    return 0;
}

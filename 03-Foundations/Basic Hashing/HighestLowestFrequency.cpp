/*

Given an array of n integers, find the most frequent
element in it i.e., the element that occurs the maximum 
number of times.If there are multiple elements that appear
a maximum number of times, find the smallest of them.

Examples:

Input: arr = [1, 2, 2, 3, 3, 3]

Output: 3

Explanation: The number 3 appears the most
(3 times). It is the most frequent
element.

Input: arr = [4, 4, 5, 5, 6]

Output: 4

Explanation: Both 4 and 5 appear twice, but
4 is smaller. So, 4 is the most
frequent element.

*/

#include <bits/stdc++.h>
using namespace std;

int mostFrequentElement(vector<int> &nums)
{
    int maxFreq = 0;
    int ans = -1;
    // precompute:
    map<int, int> mpp;
    for (int index = 0; index < nums.size(); index++)
    {
        mpp[nums[index]] += 1;
    }

    // traverse the map:
    for (auto it : mpp)
    {
        if (it.second > maxFreq)
        {
            maxFreq = it.second;
            ans = it.first;
        }
        // if freq is same, take smaller element
        else if (it.second == maxFreq && it.first < ans)
        {
            ans = it.first;
        }
    }
    return ans;
}

int main()
{
    int size;
    cin >> size;

    vector<int> arr(size);

    for (int index = 0; index < arr.size(); index++)
    {
        cin >> arr[index];
    }

    cout << mostFrequentElement(arr) << endl;

    return 0;
}
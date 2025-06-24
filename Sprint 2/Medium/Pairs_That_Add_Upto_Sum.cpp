#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> getAllPairs(vector<int>&nums , int targetSum){
   vector<pair<int,int>>ans;
   int size = nums.size();

   map<int,int>mpp;
   for(int index = 0 ; index<size ; index++){
      mpp[nums[index]]++;
   }

      map<pair<int,int>, bool> usedPair; // initially false


   for(int i = 0 ; i<size ; i++){
      if(mpp[targetSum - nums[i]]>0){
         int x = min(nums[i] , targetSum - nums[i]);
         int y = max(nums[i] , targetSum - nums[i]);

        if(!usedPair[{x,y}]){
         ans.push_back({x,y});
        usedPair[{x,y}] = true;          
        }

      }
   }
   return ans;
}

int main() {
  int size;
  cin>>size;
  int sum;
  cin>>sum;
  vector<int>arr(size);
  for(int i =0; i < size ; i++){
    cin>>arr[i];
  }
  
  vector<pair<int,int>> res = getAllPairs(arr , sum);
  for(auto &p:res){
cout << "(" << p.first << ", " << p.second << ") ";
  }

  return 0;
}
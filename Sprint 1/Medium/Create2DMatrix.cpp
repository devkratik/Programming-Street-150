#include <bits/stdc++.h>
using namespace std;



int main() {
  int n;
  cin>>n;


  vector<vector<int>> arr(n, vector<int>(n));
  int count = 1;
  for(int row = 0 ; row < n ; row++){
    for(int col = 0 ; col < n ; col++){
        arr[row][col] = count++;
    }
  }
  
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
 

  return 0;
}
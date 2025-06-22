#include <bits/stdc++.h>
using namespace std;

int pascalPatternUptoRow(int n){
        for(int row = 0 ; row < n ; row++){
              int C = 1;
              //spaces:
              for(int j = 0 ; j<(n-(row+1)) ; j++){
                cout<<"  ";
              }
              for(int col = 0 ; col < row+1 ; col++){
                  cout << C << " "<<" ";
                  C = C * (row - col) / (col + 1);
              }
              cout<<endl;
        }

}

int main() {
  
  int row;
  cin>>row;

   pascalPatternUptoRow(row);


  return 0;
}
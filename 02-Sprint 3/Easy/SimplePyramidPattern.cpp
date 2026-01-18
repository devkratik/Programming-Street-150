#include <iostream>
using namespace std;

//Function to print simple pyramid pattern.
void pyramidPattern(int n){
   for(int row = 0 ; row < n ;  row++){
    // spaces:
    for(int col = 0 ; col<n-1-row; col++){
        cout<<" "<<" ";
    }
    // stars:
    for(int col = 0 ; col<2*row+1; col++){
        cout<<"*"<<" ";
    }
    cout<<endl;
   }
}

int main() {
    int rows;
    cin>>rows;
    pyramidPattern(rows);
    return 0;
}
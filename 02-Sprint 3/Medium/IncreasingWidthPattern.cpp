#include <iostream>
using namespace std;

//Function to print star pattern with increasing width.
void increasingWidthPattern(int n){
    for(int row = 0 ; row < n ; row++){
        for(int col = 0 ; col < 2*row+1; col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int rows;
    cin>>rows;
    increasingWidthPattern(rows);    
    return 0;
}
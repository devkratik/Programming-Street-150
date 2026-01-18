#include <iostream>
using namespace std;

// Function to print increasing number pattern:
void increasingNumberPattern(int n){
    int count = 1;
    for(int row = 0 ; row < n ; row++ ){
        for(int col = 0; col < row+1 ; col++){
            cout<<count++<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int row;
    cin>>row;
    increasingNumberPattern(row);    
    return 0;
}
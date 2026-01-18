#include <iostream>
using namespace std;

// Function to print Pyramid pattern with number:
void pyramidNumber(int n){
    for(int row = 0 ; row < n ; row++){
        // space:
        for(int col = 0 ; col < n-(row+1); col++){
            cout<<" "<<" "; 
        }
        //number:
        for(int col = row+1 ; col <= 2*row+1 ; col++ ){
            cout<<col<<" ";
        }
        //number(decreasing):
        for(int col = 2*row ; col >= row+1 ; col-- ){
            cout<<col<<" ";
        }

        cout<<endl;
    }
}

int main() {
    int row;
    cin>>row;
    pyramidNumber(row);
    return 0;
}
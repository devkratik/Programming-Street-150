#include <iostream>
using namespace std;

//Function to print Inverted Triangle Pattern.
void invertedTriangle(int n){
    for(int row = 0 ; row < n ; row++){
        //Spaces:
        for(int col = 0 ; col < row ; col++){
            cout<<" "<<" ";
        }


        //Stars:
        for(int col = 0 ; col<n-row; col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}


int main() {
    int row;
    cin>>row;
    invertedTriangle(row);
    return 0;
}
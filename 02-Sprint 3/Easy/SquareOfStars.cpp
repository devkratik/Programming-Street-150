#include <iostream>
using namespace std;

//Function to print square of stars.
void squareOfStars(int n){
    for(int row = 0; row<n; row++){
        for(int col = 0 ; col<n; col++){
            cout<<"*"<<" ";
        }
      cout<<endl;
    }
}

int main() {
    int rows;
    cin>>rows;
    squareOfStars(rows);
    return 0;
}
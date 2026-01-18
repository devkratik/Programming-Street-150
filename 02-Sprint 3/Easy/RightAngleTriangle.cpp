#include <iostream>
using namespace std;

//Function to print right angle triangle star pattern:
void rightAngleTriangle(int n){
    for(int row = 0 ; row < n ; row++){
        for(int col = 0 ; col < row+1 ; col++){
            cout<<"*"<<" ";
        }
      cout<<endl;
    }
}

int main() {
    int rows;
    cin>>rows;
    rightAngleTriangle(rows);
    return 0;
}
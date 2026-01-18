#include <iostream>
using namespace std;

//Function to print cross diamond pattern of star.
void crossDiamondPattern(int n){
    //upperHalf:
    for(int row = 0 ; row < n ; row++){
        //spaces:
        for(int col = 0 ; col < row ; col++){
            cout<<" ";
        }
        //star:
        for(int col = 0 ; col < n - row; col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    //lowerHalf:
    for(int row = 0 ; row < n-1 ; row++){
        //spaces:
        for(int col = 0; col < n-1-(row+1) ; col++){
            cout<<" ";
        }
        //stars:
        for(int col = 0 ; col < row+2; col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int row;
    cin>>row;
    crossDiamondPattern(row);
    return 0;
}
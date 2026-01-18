#include <iostream>
using namespace std;

//Function to print border number pattern.
void borderNumberPattern(int n){
    for(int row = 0 ; row < n ; row++){
        if(row == 0 || row == n-1){
            for(int col = 0 ; col < n; col++){
                cout<<col+1<<" ";
            }
        }
        else{
            cout<<1<<" ";
            //spaces:
            for(int col = 0 ; col < n-2; col++){
                cout<<" "<<" ";
            }
            cout<<1<<" ";
        }
        cout<<endl;
    }
}


int main() {
    int row;
    cin>>row;
    borderNumberPattern(row);
    return 0;
}
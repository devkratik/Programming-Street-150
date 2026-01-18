#include <iostream>
using namespace std;

//Function to print number diamond pattern.
void diamondNumberPattern(int n){
    //upper half
    for(int row = 0 ; row < n; row++){
        //spaces:
        for(int col = 0 ; col < n-(row+1) ;col++){
            cout<<" "<<" ";
        } 
        //number(increasing):
        for(int col = 0 ; col<row+1; col++){
            cout<<col+1<<" ";
        }
        //number(decreasing):
        for(int col = row ; col >= 1 ; col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
     //lower half
     for(int row = 0 ; row < n-1 ; row++){
        // spaces:
        for(int col = 0 ; col < row+1; col++){
            cout<<" "<<" ";
        }
        //numbers(increasing):
        for(int col = 0 ; col < n-(row+1); col++){
            cout<<col+1<<" ";
        }
        //numbers(decreasing):
        for(int col = n-row-2 ; col >=1 ; col--){
            cout<<col<<" ";
        }
        cout<<endl;
     }
}

int main() {
    int row;
    cin>>row;
    diamondNumberPattern(row);
    return 0;
}
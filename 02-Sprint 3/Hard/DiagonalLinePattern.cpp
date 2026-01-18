#include <iostream>
using namespace std;

//Function to print Diagonal line pattern of characters.
void diagonalLineCharPattern(int n){
    char ch = 65;
    for(int row = 0 ; row < n ; row++){
        char ch1 = row;
        if(row == 0){
            cout<<ch;
        }
        else{
            char ch1 = ch+row;
            cout<<ch1;
            for(int col = 0 ; col<row ; col++){
                cout<<" ";
            }
            cout<<ch1;
        }
        cout<<endl;
    }
}

int main() {
    int row;
    cin>>row;
    diagonalLineCharPattern(row);
    return 0;
}
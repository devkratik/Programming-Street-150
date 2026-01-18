#include <iostream>
using namespace std;

//Function to print inverted pyramid character pattern.
void invertedCharacterPattern(int n){
    char ch = 67;
    for(int row = 0 ; row < n ; row++){
        //spaces:
        for(int col = 0 ; col < row ; col++){
            cout<<" "<<" ";
        }
        //character:
        for(int col = 0 ; col < n - row ; col++){
            cout<<ch<<" ";
        }
        ch--;
        cout<<endl;
    }
}

int main() {
    int row;
    cin>>row;
    invertedCharacterPattern(row);
    return 0;
}
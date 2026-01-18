#include <iostream>
using namespace std;

//Function to print characters pattern in right angle format.
void characterPattern(int n){
    char ch = 65;
    for(int row = 0 ; row < n ; row++){
        for(int col = 0 ; col < row+1; col++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
}

int main() {
    int row;
    cin>>row;
    characterPattern(row);
    return 0;
}
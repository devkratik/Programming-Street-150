#include <iostream>
using namespace std;

// Function to print consecutive number pattern.
void consecutiveNumbers(int n){
    int count = 1;
    for(int row = 0 ; row < n ; row++){
        for(int col = 0 ; col < n; col++){
            cout<<count++<<" ";
        }
        cout<<endl;
        
    }
}

int main() {
    int rows;
    cin>>rows;
    consecutiveNumbers(rows);
    return 0;
}
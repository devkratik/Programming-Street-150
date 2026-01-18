#include <iostream>
using namespace std;

// Function to print number triangle pattern.
void numberTriangle(int n){
    for(int rows = 0 ; rows < n ; rows++){
        for(int col = 0 ; col < rows+1 ; col++){
            cout<<col+1<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int row;
    cin>>row;
    numberTriangle(row);
    return 0;
}
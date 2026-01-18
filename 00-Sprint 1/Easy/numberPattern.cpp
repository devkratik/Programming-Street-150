#include <iostream>
using namespace std;

// Function to print number pattern:
void numberPattern(int row){
    for(int index = 0; index < row; index++){
        int count = 1;
        for(int col = 0 ; col < index+1; col++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

}

int main() {
    int n;
    cin>>n;
    numberPattern(n);
    return 0;
}
#include <iostream>
using namespace std;

//Function to print X and O pattern.
void XandOPattern(int n){
    for(int row = 0 ; row < n ; row++){
        for(int col = 0 ; col< n; col++){
            if((row%2 == 0 && col%2 == 0) || (row%2!=0 && col%2!=0) ){
                cout<<"X"<<" ";
            }
            else{
                cout<<"O"<<" ";
            }
        }
        cout<<endl;
    }
}

int main() {
    int row;
    cin>>row;
    XandOPattern(row);
    return 0;
}
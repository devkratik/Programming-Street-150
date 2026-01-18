#include <iostream>
using namespace std;

//Function to print alternate 0 and 1 pattern.
void binaryNumPattern(int n){
 for(int row = 0 ; row < n ; row++){
     for(int col = 0 ; col < n ; col++){
        if((row%2 == 0 && col%2 == 0) || (row%2 != 0 && col%2!= 0) ){
          cout<<"0"<<" ";
        }
        else{
            cout<<"1"<<" ";
        }
        
        }
        cout<<endl;
     }
    }
 


int main() {
    int row;
    cin>>row;
    binaryNumPattern(row);
    return 0;
}
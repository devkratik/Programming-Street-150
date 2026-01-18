#include <iostream>
#include <cmath> 
using namespace std;

//Function to check perfect squares:
bool perfectSquare(int num){
    int sqrRoot = sqrt(num);
    if(sqrRoot*sqrRoot == num ){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int n;
    cin >> n;
    int ans = perfectSquare(n);
    if(ans){
        cout<<n<<" is perfect square.";
    }
    else{
        cout<<n<<" is not a perfect square.";
    }
    return 0;
}

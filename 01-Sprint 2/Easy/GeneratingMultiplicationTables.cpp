#include <iostream>
using namespace std;
int main() {
    int start,end;
    cin>>start>>end;
    int count = 1;
    while(count<=4){
        for(int index = start ; index <= end ; index++){
            cout<<index<<"*"<<count<<" = "<<index*count<<"   ";
        }
        count++;
        cout<<endl;
    }
    return 0;
}

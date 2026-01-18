#include <bits/stdc++.h>
using namespace std;

//will use map<int,int>
int main() {
    int size;
    cin>>size;
    int arr[size];
    for(int index = 0 ; index < size ; index++){
        cin>>arr[index];
    }

    //precompute:
    map<int,int> mpp ;
    for(int index = 0 ; index < size ; index++){
        mpp[arr[index]]+=1;
    }
    // sorted order print:
    for(auto it:mpp){
        cout<<it.first<<"--->"<<it.second<<endl;
    }


    int numQueries;
    cin>>numQueries;

    while(numQueries--){
        int num;
        cin>>num;
        //fetch
        cout<<mpp[num]<<endl;
    }
    return 0;
}
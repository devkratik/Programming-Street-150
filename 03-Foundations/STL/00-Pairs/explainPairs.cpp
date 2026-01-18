#include<bits/stdc++.h>
using namespace std;

/* Function explaining pairs */
void explainPairs(){
    //simple pair with 2 integer values:
    pair<int,int> p1 = {1,3};
    cout<<p1.first<<" "<<p1.second<<endl;
    //nested pair i.e. pair of int and a pair:
    pair<int , pair<int,int>> p2 = {1 , {2,3}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
    //array of pairs:
    pair<int,int> arr[] = {{1,3},{5,7},{9,11}};
    cout<<arr[0].first<<" "<<arr[0].second<<" "<<arr[1].first<<" "<<
    arr[1].second<<" "<<arr[2].first<<" "<<arr[2].second<<endl;
}



int main() {
    explainPairs();
    return 0;
}
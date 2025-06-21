#include <iostream>
using namespace std;
int main() {
    // take string input:
    string str;
    cin>>str;
    // take total no of queries:
    int numQueries;
    cin>>numQueries;

    //precompute:
    int hash[26] = {0};
    for(int index = 0 ; index< str.size(); index++){
        hash[str[index] - 'a']+=1; // increase the count of that char
    }

    while(numQueries--){
        char c;
        cin>>c;
        //fetch:
        cout<<hash[c-'a']<<endl;
    }
   
    return 0;
}
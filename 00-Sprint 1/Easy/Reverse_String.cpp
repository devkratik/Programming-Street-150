#include <iostream>
using namespace std;

//Function to reverse a string:
string reverseString(string s){
    if( s.length() == 0 ){
        cout<<"Empty string";
        return "";
    }
    string ans(s.size() , ' '); // initializes ans string!
    int i= 0;
    for(int index = s.size()-1 ; index >=0 ; index--){
        ans[i++] = s[index];
    }
    return ans;
}

int main() {
    string str;
    cin>>str;
    cout<<reverseString(str);
    return 0;
}
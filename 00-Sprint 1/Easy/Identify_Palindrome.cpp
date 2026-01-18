#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

bool isPalindrome(string s){
    if(s.length() == 0){
        return false;
    }

    int start = 0;
    int end = s.size() - 1;

    while(start < end){
        while(start < end && !isalnum(s[start])){
            start++;
        }
        while(start < end && !isalnum(s[end])){
            end--;
        }

        if(tolower(s[start]) != tolower(s[end])){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    string str;
    getline(cin, str);

    if(str.length() == 0){
        cout << "false" << endl;
    } else if(isPalindrome(str)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }

    return 0;
}
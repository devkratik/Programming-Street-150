#include <bits/stdc++.h>
using namespace std;

//Function to count vowels and consonants in string:
pair<int,int> countVowelConsonants(string str){

    if(str.length() == 0){
        cout<<"Empty string";
        return make_pair(0,0);
    }
    int countVowel = 0;
    int countConsonants = 0;
   
    for(int index = 0 ; index<str.size();index++){
        char ch = tolower(str[index]);
        if(ch=='a'||ch=='e'||ch=='i'||
            ch=='o'||ch=='u'){
                countVowel++;
        }
        else if(ch >= 'a' && ch <= 'z'){
            countConsonants++;
        }
    }
   pair<int, int> ans = make_pair(countVowel, countConsonants);
    return ans;
}
int main() {
    string s;
    cin>>s;
    pair<int,int> ans = countVowelConsonants(s);
    cout<<"Vowels : "<<ans.first<<endl;
    cout<<"Consonants : "<<ans.second<<endl;    
    return 0;
}
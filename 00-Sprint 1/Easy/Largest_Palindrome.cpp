#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

string largestPalindrome(string s) {
    if (s.empty()) {
        return "";
    }

    int max_len = 1;
    int start_index = 0;

    for (int i = 0; i < s.size(); ++i) {
        int left = i;
        int right = i;
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            if (right - left + 1 > max_len) {
                max_len = right - left + 1;
                start_index = left;
            }
            left--;
            right++;
        }

        left = i;
        right = i + 1;
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            if (right - left + 1 > max_len) {
                max_len = right - left + 1;
                start_index = left;
            }
            left--;
            right++;
        }
    }

    return s.substr(start_index, max_len);
}

int main() {
    string s;
    cin >> s;
    string ans = largestPalindrome(s);
    cout<<ans<<endl;
    return 0;
}
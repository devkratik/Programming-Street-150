#include <iostream>
#include <string>
using namespace std;

//Function to find the sum of numbers present in string:
int sumOfNumbersInString(const string &s) {
    int sum = 0;
    int number = 0;
    bool inNumber = false;

    for (char ch : s) {
        if (isdigit(ch)) {
            number = number * 10 + (ch - '0');
            inNumber = true;
        } else {
            if (inNumber) {
                sum += number;
                number = 0;
                inNumber = false;
            }
        }
    }

    // In case string ends with a number
    if (inNumber) {
        sum += number;
    }

    return sum;
}

int main() {
    string s;
    getline(cin, s);
    cout << "Sum: " << sumOfNumbersInString(s) << endl;
    return 0;
}

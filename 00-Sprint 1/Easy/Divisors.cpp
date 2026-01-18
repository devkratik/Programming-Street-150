#include <iostream>
using namespace std;

//Function to calculate divisors:
void divisors(int num){
   for (int index = 2; index * index <= num; index++) {
    if (num % index == 0) {
        cout << index << " "; // chhota divisor
        if (index != num / index) {
            cout << num / index << " "; // bada paired divisor
        }
    }
}

}

int main() {
    int N;
    cin>>N;

    divisors(N);
    return 0;
}
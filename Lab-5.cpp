#include <iostream>

using std::cout;
using std::cin;
//using std::cout;

//void prog1() {

//}

void prog2() {
    int mult = 1;
    int digit = 0;
    int N;
    cin >> N;
    while (N > 0) {
        digit = N % 10;
        if (digit % 2 != 0)
        mult *= digit;
        N /= 10;
    }
    cout << mult;
}

int main() {
//prog1;
prog2;
}
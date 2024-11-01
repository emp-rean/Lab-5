#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void prog1() {
    int n;
    cout << "enter n: ";
    cin >> n;
    int i;
    unsigned long long mult = 1;
    int max = 0;
    int max_number;
    for (i = 0; i < n; i++) {
        if(i % 5 == 0)
            continue;
            if (max < i)
                max = i;
        max_number = max + 1;
        mult *= i;
    }
    cout << "mult = " << mult << endl;
    cout << "max = " << max << endl;
    cout << "max number = " << max_number << endl;
}

void prog2() {
    int mult = 1;
    int digit = 0;
    int N;
    cout << "enter N;" << endl; 
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
    prog1();
    prog2();
}
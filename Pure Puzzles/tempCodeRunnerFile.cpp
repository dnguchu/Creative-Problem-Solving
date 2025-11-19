#include <iostream>
using namespace std;

int doubleDigitValue(int digit) {
    int doubledDigit = digit * 2;
    int sum;
    if(doubledDigit >= 10) {
        sum = 1 + doubledDigit % 10;
    }
    else {
        sum = doubledDigit;
    }
    return sum;
}


int main() {
    char digit;
    cout << "Enter a one-digit number: ";
    cin >> digit;
    int sum = digit - '0';
    cout << "Is the sum of digits " << sum << "? /n";
}
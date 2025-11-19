#include <iostream>
using namespace std;

int main() {
    int tenIntegerArray[10] = {4, 5, 9, 12, -4, 0, -57, 30987, -287, 1};
    int secondaryArray[10];
    for (int i=0; i < 10; i++) secondaryArray[i] = tenIntegerArray[i];
    cout << secondaryArray[0];
}
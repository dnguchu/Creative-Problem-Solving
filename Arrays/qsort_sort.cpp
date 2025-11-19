#include <iostream>
using namespace std;

int compareFunc(const void *voidA, const void *voidB) {
    int intA = *(const int *)voidA;
    int intB = *(const int *)voidB;
    return intA - intB;
}

int main() {
    const int ARRAY_SIZE = 10;
    int intArray[ARRAY_SIZE] = {87, 28, 100, 78, 84, 98, 75, 70, 80, 68};
    qsort(intArray, ARRAY_SIZE, sizeof(int), compareFunc);
    cout << intArray[0];
}
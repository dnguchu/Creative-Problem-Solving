#include <iostream>
using namespace std;

int main(){
    char outputCharacter;
    enum modeType {UPPERCASE, LOWERCASE, PANCTUATION};
    modeType mode = UPPERCASE;
    char digitChar;
    do {
        digitChar = cin.get();
        int number = (digitChar - '0');
        digitChar = cin.get();
        while ((digitChar != 10) && (digitChar != ',')) {
            number = number * 10 + (digitChar - '0');
            digitChar = cin.get();
        }
        switch (mode) {
            case UPPERCASE: 
                number = number % 27;
                outputCharacter = number + 'A' - 1;
                if (number == 0) {
                    mode = LOWERCASE;
                    continue;
                }
                break;
            case LOWERCASE:
                number = number % 27;
                outputCharacter = number + 'a' - 1;
                if (number == 0) {
                    mode = PANCTUATION;
                    continue;
                }
                break;
            case PANCTUATION:
                number = number % 9;
                switch (number) {
                case 1: outputCharacter = '!'; break;
                case 2: outputCharacter = '?'; break;
                case 3: outputCharacter = ','; break;
                case 4: outputCharacter = '.'; break;
                case 5: outputCharacter = ' '; break;
                case 6: outputCharacter = ';'; break;
                case 7: outputCharacter = '"'; break;
                case 8: outputCharacter = '\''; break;
                }
                if (number == 0) {
                    mode = UPPERCASE;
                    continue;
                }
                break;
        }
        cout << outputCharacter;
    } while (digitChar != 10);
    cout << "\n";
}

//Mode Switching
/*
int main(){
    enum modetype {UPPERCASE, LOWERCASE, PANCTUATION};
    int number;
    modetype mode = UPPERCASE;
    cout << "Enter some numbers ending with -1: ";
    do {
        cin >> number;
        cout << "Number read: " << number;
        switch (mode) {
            case UPPERCASE: number = number % 27;
            cout << ". Modulo 27: " << number << ".";
            if (number == 0) {
                cout << "Switch to LOWECASE";
                mode = LOWERCASE;
            } break;
            case LOWERCASE: number = number % 27;
            cout << ". Modulo 27: " << number << "."; 
            if (number == 0) {
                cout << "Switch to PANCTUATION";
                mode = PANCTUATION;
            } break;
            case PANCTUATION: number = number % 9;
            cout << ". Modulo 9: " << number << ".";
            if (number == 0) {
                cout << "Switch to UPPERCASE";
                mode = UPPERCASE;
            } break;
        }
        cout << "\n";
    } while (number != -1);
}
*/

//Panctuation
/*
int main(){
    cout << "Enter a number 1-8: ";
    int number;
    cin >> number;
    char outputCharacter;
    switch (number) {
        case 1: outputCharacter = '!'; break;
        case 2: outputCharacter = '?'; break;
        case 3: outputCharacter = ','; break;
        case 4: outputCharacter = '.'; break;
        case 5: outputCharacter = ' '; break;
        case 6: outputCharacter = ';'; break;
        case 7: outputCharacter = '"'; break;
        case 8: outputCharacter = '\''; break;
    }
    cout << "Equivalent symbol: " << outputCharacter << "\n";
}
*/

//Uppercase letters
/*
int main(){
    cout << "Enter a number 1-26: ";
    int number;
    cin >> number;
    char outputCharacter;
    outputCharacter = number + 'A' - 1;
    cout << "Equivalent symbol: " << outputCharacter << "\n";
}
*/

//Lowercase letters
/*
int main(){
    cout << "Enter a number 1-26: ";
    int number;
    cin >> number;
    char outputCharacter;
    outputCharacter = number + 'a' - 1;
    cout << "Equivalent symbol: " << outputCharacter << "\n";
}
*/

//Numbers
/*
int main(){
    char digitChar;
    do {
        digitChar = cin.get();
        int number = (digitChar - '0');
        digitChar = cin.get();
        while ((digitChar != 10) && (digitChar != ',')) {
            number = number * 10 + (digitChar - '0');
            digitChar = cin.get();
            cout << "Number entered: " << number << "\n";
        }
    } 
    while (digitChar != 10);
}
*/
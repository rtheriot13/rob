#include <iostream>
#include <fstream>
#include <string>
using namespace std;

char shiftChar(char c, int shift, bool encrypt) {
    if (!isalpha(c)) {
        return c; // leave non-letters unchanged
    }

    char base = isupper(c) ? 'A' : 'a';

    if (encrypt) {
        return ((c - base + shift) % 26) + base;
    }
    else {
        return ((c - base - shift + 26) % 26) + base;
    }
}

int main() {
    string mode;
    int shift;

    // ask user for mode
    cout << "Enter mode (encrypt/decrypt): ";
    cin >> mode;

    // ask user for shift
    cout << "Enter shift value: ";
    cin >> shift;

    bool encrypt = (mode == "encrypt");

    // read from input.txt
    ifstream inputFile("input.txt");
    if (!inputFile) {
        cout << "Error: Could not open input.txt" << endl;
        return 1;
    }

    
    return 0;
}
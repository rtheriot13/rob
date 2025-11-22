/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
**
** Class: 	CSC 242
** Assignment: 	Lesson 4
** File: 	source.cpp
** Description: cypher encript/ decript
**
** Author: Credeur, John; Larios, Luis; Romero, Eddi; Theriot, Robert
** Date: 22 NOV 25
** -------------------------------------------------------------------------*/

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
/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
**
** Class: 	CSC 242
** Assignment: 	Assignment 4-1
** File: 	source.cpp
** Description:
**
** Author:
** Date:__NOV 25
** -------------------------------------------------------------------------*/

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ifstream dictFile("words.txt");
    ifstream inputFile("input.txt");

    vector<string> words;
    vector<string> input;

    if (!dictFile) {
        cout << "ERROR: Could not open dictionary file.\n";
        return -1;
    }
    if (!inputFile) {
        cout << "ERROR: Could not open input file.\n";
        return -1;
    }

    string word;

    // Load dictionary words
    while (dictFile >> word) {
        words.push_back(word);
    }

    // Load input words
    while (inputFile >> word) {
        input.push_back(word);
    }

    // Compare input words with dictionary
    for (string& inputword : input) {
        bool found = false;

        for (string& dict_word : words) {
            if (inputword == dict_word) {
                found = true;
                break;
            }
        }

        if (!found) {
            cout << inputword << endl;
        }
    }

    return 0;
}
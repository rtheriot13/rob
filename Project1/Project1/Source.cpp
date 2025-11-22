/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
**
** Class: 	CSC 242
** Assignment: 4
** File: 	source.cpp
** Description: Find max, min and average of 10 number array
**
** Author: Robert Theriot
** Date: 16 NOV 25
** -------------------------------------------------------------------------*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int array[10];

    // get 10 numbers from user
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> array[i];
    }

    // find max
    int max = array[0];
    int max_index = 0;


    for (int i = 0; i < 10; i++) {
        if (array[i] > max) {
            max = array[i];
            max_index = i;
        }
    }

    // find min
    int min = array[0];
    int min_index = 0;

    for (int i = 0; i < 10; i++) {
        if (array[i] < min) {
            min = array[i];
            min_index = i;
        }
    }

    // find sum
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum = sum + array[i];
    }

    // print results
    cout << "Maximum value: " << max << " at index: " << max_index << endl;
    cout << "Minumum value: " << min << " at index: " << min_index << endl;
    cout << "Average value: " << sum / 10.0 << endl;


    return 0;
}
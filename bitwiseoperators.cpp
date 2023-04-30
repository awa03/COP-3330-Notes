/*
    Bitwise Operators
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    // Basic Types
    cout << "Bitwise Operators" << endl;
    cout << endl;

    cout << "Testing Data" << endl;
    cout << "5 = 00000101" << endl;
    cout << "6 = 00000110" << endl;
    cout << endl;
    
    // Bitwise AND
    cout << "Bitwise AND" << endl;
    cout << " & sets to 1 if both bits are 1, else 0 " << endl;
    cout << (5 & 6) << endl;
    cout << endl;

    // Bitwise OR
    cout << "Bitwise OR" << endl;
    cout << " | sets to 1 if either bit is 1, else 0 " << endl;
    cout << (5 | 6) << endl;
    cout << endl;

    // Bitwise XOR
    cout << "Bitwise XOR" << endl;
    cout << " ^ sets to 1 if only one bit is 1, else 0 " << endl;
    cout << (5 ^ 6) << endl;
    cout << endl;

    // Bitwise NOT
    cout << "Bitwise NOT" << endl;
    cout << " ~ inverts all bits " << endl;
    cout << (~5) << endl;
    cout << endl;

    // Bitwise Left Shift
    cout << "Bitwise Left Shift" << endl;
    cout << " << shifts bits left, filling in with 0s " << endl;
    cout << (5 << 1) << endl;
    cout << endl;

    // Bitwise Right Shift
    cout << "Bitwise Right Shift" << endl;
    cout << " >> shifts bits right, filling in with 0s " << endl;
    cout << (5 >> 1) << endl;
    cout << endl;

    return 0;
}
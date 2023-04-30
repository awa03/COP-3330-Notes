// Exception Handling

/*
Exception Handling us a type of error checking, avalible in C++.
It is a way of handling errors in a program.
It is a way of processing errors that occur during the execution of a program.
Exception handlers are a piece of code that resolves and exception situation.
They are intended to be seperate from the main task.

Why?
Intermixing logic can make programs hard to read and debug.
Many potential problems are very infrequent.
They are seperate to improve clarity and modifiablitly.
Can improve a programs fault tolerance.

When?
Shouldnt be used in all cases
best for infrequent errors, that are hard to predict

NOT - User inut checking
SHOULD - Errors that would terminate the program

How?
try - enclosed code that may throw an exception

catch - block of code that handles the exception

throw - statement that throws an exception

SYNTAX:
#include <exception>
using std::exception;

try- 
    try {

    }

catch-
    <follows try block>
    catch (exception e) {

    }

*/

#include <iostream>
#include <string>
#include <fstream>
#include <exception>
using namespace std;



int main(){

    cout << "DIVIDE BY ZERO EXCEPTION" << endl;
    // Divide By Zero Exception
    try {
        // Some code that may throw an exception
    
        cout << "Try Block" << endl;
        int x = 10;
        int y = 0;
        cout << x << " / " << y << endl;
        if (y == 0) {
            throw "Cannot divide by zero";
        }
        int z = x / y;
    }
    catch (const char* msg) {
        // Handle the exception
        cerr << msg << endl;
    }
    

    cout << "Example 2" << endl;

    ifstream inputFile;
    string filename;
    cout << "Please enter the name of the file to read from: ";
    cin >> filename;
    try {
        inputFile.open(filename);
        if (!inputFile) {
        throw runtime_error("Error: File not found.");
        }
        string line;
        while (getline(inputFile, line)) {
        cout << line << endl;
        }
        inputFile.close();
    }
    catch (const runtime_error& e) {
        cerr << e.what() << endl;
    }
    return 0;
    
    
}
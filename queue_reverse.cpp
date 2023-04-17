#include <iostream>
#include "queue"
#include "string"
#include "stack"
using namespace std;
int main(){
// Declare Queue & Stack
    queue<string> waitlist;
    stack<string>temp;
    queue<string> reverse_waitlist;

    // Set Queue Data
    waitlist.push("Joe");
    waitlist.push("Aiden");
    waitlist.push("Sylla");
    waitlist.push("Greg");
    waitlist.push("David");

    // add data to stack
    while (!waitlist.empty()) {
        temp.push(waitlist.front());
        waitlist.pop();
    }
    // add data back to queue
    while (!temp.empty()) {
        reverse_waitlist.push(temp.top());
        temp.pop();
    }
}
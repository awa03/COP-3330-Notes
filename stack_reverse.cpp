#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    // Stack Decleration
    stack<string> pancakes;
    stack<string>reverse_pancake;

    cout << "Pushing Stack" << endl;

    // push allows for input at the top of the stack
    pancakes.push("Silver Dollar");
    pancakes.push("Chocolate Chip");
    pancakes.push("Banana");
    pancakes.push("Blueberry");
    pancakes.push("Plain");
    string temp;

    // in order to reverse the stack we set the top element of the stack to the
    // first element within the new reversed stack
    for(int i=0; i < pancakes.size()*2; i++){
        reverse_pancake.push(pancakes.top());
        pancakes.pop();
    }
}

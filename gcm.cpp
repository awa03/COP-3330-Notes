/*
    Greatest Common Multiple
*/
#include <iostream>
using namespace std;

// Function prototype
int gcm(int, int);
int gcd(int, int);

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "GCM of " << a << " and " << b << " is " << gcm(a, b) << endl;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}

// Recursive function
int gcd(int numOne, int numTwo){
    if (numOne % numTwo == 0){
        return numTwo;
    }
    else{
        return gcd(numTwo, numOne % numTwo);
    }
}

int gcm(int numOne, int numTwo){
    int answer;
    while(numTwo != 0){
        answer = numOne % numTwo;
        numOne = numTwo;
        numTwo = answer;
    }
    return numOne;
}

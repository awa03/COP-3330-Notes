/*
####################
# Template Classes #
####################
*/

// Template classes are classes that have generic data types
// They are useful for creating classes that can be used with different data types

// Example:
// int maximum(int a, int b, int c)
/*
    We Want To Find The Maximum Of Three Numbers,
    but how would we use this function for other types
    (double, unsigned, etc), without overloading
    the function

    int maximum(int a, int b, int c)
  { 
     int max = a;
     if (b > max)
	max = b;
     if (c > max)
	max = c;
     return max;
  }

  We can use a template class to do this

  Example Source:
  https://www.cs.fsu.edu/~myers/cop3330/notes/templates.html 
*/

#include <iostream>
#include <string>
using namespace std;

template <class T>
void print(T n){
    cout << n << endl;
}


int main(){
    // Basic Types
    cout << "Template Classes" << endl;
    cout << endl;
    
    // Pass String Through Template
    cout << "String Example" << endl;
    print<string>("Hello");
    cout << endl;

    // Pass Integer Through Template
    cout << "Integer Example" << endl;
    print<int>(5);
    cout << endl;

    // Pass Float Through Template
    cout << "Float Example" << endl;
    print<float>(5.5);
    cout << endl;

    // This can also be used to show arithmetic
    cout << "Arithmetic Example" << endl;
    print<int>(5 + 5);
    cout << endl;


}
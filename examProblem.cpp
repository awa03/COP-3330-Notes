/*
Problem Statement

Sample code writing exercise (same format as on final exam).
Format:  I give you a main program, and sample execution output.
         You show me the class (declaration and definition files).
------------------------------------------------------------------

Here is my main program: 

	#include <iostream>
	#include "flex.h"
	using namespace std;

	int main()
	{
		Flex a, b("Merry"), c("Christmas");
		cout << a << ',' << b << ',' << c << endl;
		b.cat(a);
		cout << b << endl;
		b.cat(c);
		cout << b << endl;
		c.cat(c);
		c.cat(c);
		cout << c << endl;
		return 0;
	}

	Here is my execution output:

	* *,*Merry*,*Christmas*
	*Merry *
	*Merry Christmas*
	*ChristmasChristmasChristmasChristmas*


	Comments:

- Objects of class Flex allow a variable length string to be maintained.
- When the constructor for Flex is provided a c-string as a parameter, 
the Flex object created will have that string value.  If no parameter is
provided, a default string consisting of exactly one space should be
created.
- Flex should have an overload of the output operator (<<) that will
display the string surrounded by stars (*).
- Flex also has a void function, cat, having one reference parameter of
type Flex.  The function cat should append the string in that parameter to
the end of the Flex object invoking cat.
- There is no established bound on the size of a Flex object, so dynamic
storage allocation should be used.
- All Flex member data is private

On the next page show me the contents of flex.h and flex.cpp.  The use of
the <cstring> functions we discussed in class is permitted.

*/

// The following code will NOT have a seperate header file for ease of use



#include <iostream>
#include <cstring>
using namespace std;


class Flex {
private:
    char* str;
    int len;
public:

// Default Constructor
    Flex(){
        // Creates a new array str
        str = new char[2];

        // set the fist position to ' '
        str[0] = ' ';

        // set last pos to NULL
        str[1] = '\0';

        // Length of 2
        len = 2;
    };

    // Constructor
    Flex(const char* s){
        len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
    };

    // Destructor
    ~Flex(){
        delete[] str;
    };

    // CAT function
    void cat(const Flex& f){

        // new length to the total
        int newLen = len + f.len - 1;

        // make new string
        char* newStr = new char[newLen];

        // copy strings
        strcpy(newStr, str);
        strcat(newStr, f.str);

        // clear old string
        delete[] str;

        //resize string
        str = newStr;
        len = newLen;
    };

    // 
    friend std::ostream& operator<<(std::ostream& os, const Flex& f){
        // output str with stars surrounding
        os << "*";
        os << f.str;
        os << "*";
        return os;
    };
};

int main()
{
    // Provided Test File
    Flex a, b("Merry"), c("Christmas");
    cout << a << ',' << b << ',' << c << endl;
    b.cat(a);
    cout << b << endl;
    b.cat(c);
    cout << b << endl;
    c.cat(c);
    c.cat(c);
    cout << c << endl;
    return 0;
}



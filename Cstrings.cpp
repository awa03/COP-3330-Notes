/*

C- Strings

A Meaningful Demonstration of the use of C style strings

Any Questions?
Email Me: 4376340gmail.com

*/
#include <iostream>
#include <cstring>

using namespace std;

class String{
    // << overload
    friend ostream& operator<<(ostream& os, const String& strOne){
        // gather member string
        os << strOne.str;
        return os;
    };
    // >> overload
    friend istream& operator>>(istream& is, String& strOne){
        // gather member string
        is >> strOne.str;
        return is;
    };
    // != overload
    friend bool operator!=(const String& strOne, const String& strTwo){
        // if strings are not equal
        if(strcmp(strOne.str, strTwo.str) == false){return true;}
        else {return false;}
    };
    // == overload
    friend bool operator==(const String& strOne, const String& strTwo){
        // if strings are equal
        if(strcmp(strOne.str, strTwo.str) == true){return true;}
        else {return false;}
    };   
private:
// str - string 
// len- length of string
    char * str;
    int len;

public:
    // Default Constructor
    String(){
        str = new char[1];
        len = 0;
    };
    // Constructor
    String(const char* input){
        len = strlen(input);
        str = new char[len];
        strcpy(str, input);
    }

    // Destructor
    ~String(){
        delete [] str;
    };

    int length(){
        return len;
    }

    // Copy Object
    void copy(String& copyO){
        // copy length
        len = copyO.len;
        // create tmep array
        char* temp = new char[len];
        // assign new data to temp
        strcpy(temp, copyO.str);
        // delete old array
        delete [] str;
        // resize array
        str = temp;
    };
    // Concatenate Object
    void operator+(String& strOne){
        // new length
        len = strOne.len + len;
        // new temp array
        char* temp = new char[len];
        // copy old data
        delete [] str;
        strcat(temp, strOne.str);
        // resize array
        str = temp;
    };


};

// Menu Function
void menu(){
    cout << "Select From Options Below" << endl;
    cout << "1. Create a String" << endl;
    cout << "2. Copy a String" << endl;
    cout << "3. Compare Strings" << endl;
    cout << "4. Concatenate Strings" << endl;
    cout << "5. Show This Menu" << endl;
    cout << "6. Exit" << endl;
}

int main(){
    cout << "Overloading C Style Strings" << endl;
    menu();
    int choice = 5;
    String strOne, strTwo;

    while(choice != 6){
        
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter a String" << endl;
            cin >> strOne;
            cout << "Testing '>>, <<, operators' " << endl;
            cout << strOne << endl;
            break;

        case 2:
            cout << "Enter a String" << endl;
            cin >> strOne;
            cout << "Copying String" << endl;
            strTwo.copy(strOne);
            cout << "String One: " << strOne << endl;
            cout << "String Two: " << strTwo << endl;
            break;
        case 3:
            cout << "Enter a String" << endl;
            cin >> strOne;
            cout << "Enter a String" << endl;
            cin >> strTwo;
            if(strOne == strTwo){
                cout << "Strings are Equal" << endl;
            }
            else{
                cout << "Strings are not Equal" << endl;
            }
            break;

        case 4:
            cout << "Enter a String" << endl;
            cin >> strOne;
            cout << "Enter a String" << endl;
            cin >> strTwo;
            strOne + strTwo;
            cout << "Concatenated String: " << strOne << endl;
            break;

        case 5:
            menu();
            break;

        case 6:
            cout << "Exiting" << endl;
            break;

        default:
            cout << "Invalid Input" << endl;
            break;
        }
    
    }
}


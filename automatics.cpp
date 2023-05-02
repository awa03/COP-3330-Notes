/*
    Automatics Notes
    
    If not built by you the compiler will build one
*/
#include <iostream>
#include <string>
using namespace std;

class A{
    friend ostream& operator<<(ostream& os, A &object){
        os << object.Data;
        return os;
    }
    private:
        string Data;
    public:
        void Set_Data(string& str){ 
            Data= str;
        }
        string Get_Data(){ // Envokes Copy Constructor (Return by Value)
            return Data;
        }
        void address(){
            cout << this;
        }

};

int main(){
    string str;
    cout << "Enter String" << endl;
    cin >> str;
    cout << endl;

    // Construction of variable to demonstrate
    // that the default constructor is an automatic
    cout << "Running Automatic DC" << endl;
    A default_constructor;
    default_constructor.Set_Data(str);
    cout << endl;

    // Assignment Operator (Default is a Shallow Copy)
    cout << "Running Automatic Assignment" << endl;
    A copy_default;
    copy_default = default_constructor;
    cout << endl;

    // Output Assigned Variable
    cout << "Copied String Data" << endl;
    cout << copy_default << endl;
    cout << endl;

    // Copy Constructor
    // Must Be Same Type
    // Passed by/ Returned By Value

    //From inside any member function, an object has access to its own address 
    //through a pointer called this,
    cout << "This-->" << endl;
    copy_default.address();
    
}

// Default Copy Constructors make shallow copies, so it might be
// insufficent for Data handling. A Deep copy is the solution to this

/*
    In Shallow copy, a copy of the original object is stored and only the reference address is finally copied.
    In Deep copy, the copy of the original object and the repetitive copies both are stored.
*/


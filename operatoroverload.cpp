// overloads notes

// cannot change precedence
// cannot change associativity
// cannot change arity (number of operands)
// cannot create new operators

/*
Operators can be written as functions of a class
They can be overloaded using the operator keyword
Stand alone functions may be used by using the friend keyword
*/
using namespace std;
#include <iostream>


class Distance{
    // friend function overload example
    friend ostream& operator<<(ostream& out, Distance& d){
            out << d.getX() << " " << d.getY() << endl;
            return out;
        }
    public:
    // constructors
        Distance(){
            x = 0;
            y = 0;
        }
        Distance(int x, int y){
            this->x = x;
            this->y = y;
        }
        // operator overloading
        Distance operator+(const Distance& d){
            Distance dist;
            dist.x = this->x - d.x;
            dist.y = this->y - d.y;
            return dist;
        }
        // getters 
        int getX(){return x;}
        int getY(){return y;}

        // initalize variables
    private:
        int x;
        int y;
};
// main implementation
int main(){
    Distance d1(1, 2);
    Distance d2(3, 4);
    Distance d3 = d1 + d2;
    cout << d3;

    return 0;
}

// MORE NOTES 
/*
    We can alos overload member functions
    !=, ==, <, >, <=, >=, <<, >>, +, -, *, /, %,
    ^, &, |, ~, !, =, +=, -=, *=, /=, %=, ^=, &=,
    |=, ++, --, ->, ->*, (), [], new, new[], delete,
    delete[]

    An operator is just a function. This means that it must be created with a return type, a name, and a parameter list
    The rules above give some restrictions on the parameter list
    The name of an operator is always a conjunction of the keyword operator and the operator symbol itself.
*/
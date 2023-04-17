#include <iostream>
using namespace std;

/*
 The Purpose of Polymorphism is to allow the user to give different
 definitions to the derived function calls. This may be used in a practical
 setting in the following way --

 - mobs and players may both have locations in the game, however a player would
   be contained within a different derived class than a mob even though they have
   a common attribute.

- books may be used with polymorphism. The genre for example may have different specifications
  within this subclass, thus we use polymorphism.
 */



class A{
public:
    A(){
        cout << "Constructing A" << endl;
        Number = 1;
        cout << "Default State of Number: " << Number << endl;
    }
    int check_num (){
        if(Number != 1){
            cout << "Calling Objects number has been modified" << endl;
        }
    }
protected:
    int Number;
};

class B: public A{
public:
    B(){
        cout << "Constructing B" << endl;
        cout << "Number is: " << Number << endl;

    }
    int function (){
        cout << "B Function Call" << endl;
        Number +=1;
        cout << "Adding 1! -> " << Number << endl;
    }

};
class C: public A{
public:
    C(){
        cout << "Constructing C" << endl;
        cout << "Number is: " << Number << endl;
    }
    int function(){
        cout << "C Function Call" << endl;
        Number +=2;
        cout << "Adding 2! -> " << Number << endl;
    }
};

class D: public A{
public:
    D(){
        cout << "Constructing D" << endl;
        cout << "Number is: " << Number << endl;
    }
    int function(){
        cout << "D Function Call" << endl;
        Number +=3;
        cout << "Adding 3! -> " << Number<< endl;
    }
};


int main(){
    char input;
    cout << "Class A Creation" << endl;
    A temp1;
    cout << endl;
    cout << "Class B Creation" << endl;
    B temp2;
    cout << endl;
    cout << "Class C Creation" << endl;
    C temp3;
    cout << endl;
    cout << "Class D Creation" << endl;
    D temp4;
    cout << endl;
    cout << "Function Calls" << endl;
    cout << endl;


    temp2.function();
    temp2.check_num();

    temp3.function();
    temp3.check_num();

    temp4.function();
    temp4.check_num();

    cout << endl;

    /*
     Notice that the creation of a pointer is not invoking the constructor
     for the creation of the parent class.
     To assign a base class pointer to a derived class object we must use the
     address of the derived class.
     */

    cout << "Pointers To Objects" << endl;
    A* t_pntr_2 = &temp2;
    A* t_pntr_3 = &temp3;
    A* t_pntr_4 = &temp4;

    t_pntr_2->check_num();
    t_pntr_3->check_num();
    t_pntr_4->check_num();



}

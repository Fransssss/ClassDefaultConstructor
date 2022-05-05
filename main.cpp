// Title: Default Constructor
// Purpose: Declare and define default constructor in class
// Have fun - Enjoy the process - Practices make perfect
// Author: Fransiskus Agapa

#include "Person.h"

int main()
{
    Person personOne;          // default constructor being called
    personOne.Print();

    Person personTwo;
    personTwo.SetName("Matt");
    personTwo.SetAge(20);
    personTwo.Print();

    return 0;
}

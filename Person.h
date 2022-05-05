//
// Created by XaveF on 5/4/2022.
//

#ifndef CLASSDEFAULTCONSTRUCTOR_PERSON_H
#define CLASSDEFAULTCONSTRUCTOR_PERSON_H

#include <iostream>
using std::string;

class Person
{
private:
    string _name;
    int _age;
public:
    Person();                 // Default constructor has no return type
    void SetName(const string&);
    void SetAge(const int&);
    string GetName() const;
    int GetAge() const;
    void Print()const;
};


#endif //CLASSDEFAULTCONSTRUCTOR_PERSON_H

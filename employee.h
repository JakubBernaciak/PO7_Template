#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>
#include<iostream>
class Employee{
public:
    std::string Name;
    std::string Position;
    unsigned int Age;
    Employee(std::string a="",std::string b="",unsigned int c=0);//konstruktor
    ~Employee();//destruktor
    Employee(const Employee &old_obj);//konstruktor kopiujacy
    Employee& operator=(const Employee &old);//Copy assignment operator
    friend std::ostream &operator<<(std::ostream &s,const Employee &c);
    

};

#endif
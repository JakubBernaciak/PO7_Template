#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>
#include<iostream>
class Employee{
private:
    std::string name;
    std::string position;
    unsigned int age;
public:
    Employee(std::string a="",std::string b="",unsigned int c=0);//konstruktor
    ~Employee();//destruktor
    Employee(const Employee &old_obj);//konstruktor kopiujacy
    Employee& operator=(const Employee &old);//Copy assignment operator

    void show();

};

#endif
#include "employee.h"

Employee::Employee(std::string a,std::string b,unsigned int c){
    this->name=a;
    this->position=b;
    this->age=c;
}

Employee::~Employee(){}

Employee::Employee(const Employee &old_obj){
    this->name=old_obj.name;
    this->position=old_obj.position;
    this->age=old_obj.age;
}

Employee& Employee::operator=(const Employee &old){
    if(this==&old)
        return *this;
    this->name=old.name;
    this->position=old.position;
    this->age=old.age;
    return *this;
}
std::ostream &operator<<(std::ostream &s,const Employee &c){
    s<<"Name: "<<c.name<<"\n";
    s<<"Position: "<<c.position<<"\n";
    s<<"Age: "<<c.age<<"\n";
    return s;
}


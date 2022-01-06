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

void Employee::show(){
    std::cout<<this->name<<std::endl;
    std::cout<<this->position<<std::endl;
    std::cout<<age<<std::endl;
}
#include "employee.h"

Employee::Employee(std::string a,std::string b,unsigned int c){
    this->Name = a;
    this->Position = b;
    this->Age = c;
}

Employee::~Employee() = default;

Employee::Employee( const Employee &old_obj ){
    this->Name = old_obj.Name;
    this->Position = old_obj.Position;
    this->Age = old_obj.Age;
}

Employee& Employee::operator=(const Employee &old)=default;
std::ostream &operator<<(std::ostream &s,const Employee &c){
    s<<"Name: "<<c.Name<<"\n";
    s<<"Position: "<<c.Position<<"\n";
    s<<"Age: "<<c.Age<<"\n";
    return s;
}


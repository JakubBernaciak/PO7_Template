#ifndef MAP_TEMPLATE_H
#define MAP_TEMPLATE_H

#include<iostream>

template<class ID,class DATA>
class map_template{
private:
    ID* id;
    DATA* data;
    unsigned int cur;
    unsigned int size;
public:
    map_template<ID,DATA>(){
        id=new ID[1];
        data=new DATA[1];
        cur=0;
        size=1;
    }
    //rule of three
    ~map_template<ID,DATA>(){
        delete[] id;
        delete[] data;
    }
    map_template(const map_template &old){
        this->id=old.id;
        this->data=old.data;
        this->size=old.size;
        this->cur=old.cur;
    }
    map_template &operator=(const map_template &old){
        if(this==&old)
            return *this;
        delete[] this->data;
        delete[] this->id;
        this->data=new DATA[old.size];
        this->id=new ID[old.size];
        this->size=old.size;
        this->cur=old.cur;

        copy(old.data,old.data+old.curr_size,this->data);
        for(unsigned int i=0;i<old.cur;i++){
            this->key[i]=old.key[i];
        }
        return *this;
    }
    void Add(ID a,DATA b){
        if(this->size==this->cur){
            ID *tempid;
            DATA *tempdata;
            this->size*=2;
            tempid= new ID[this->size];
            tempdata= new DATA[this->size];
            for(unsigned int i=0;i<this->cur;i++){
                tempdata[i]=this->data[i];
                tempid[i]=this->id[i];
            }
            delete[] this->data;
            delete[] this->id;
            this->data=tempdata;
            this->id=tempid;
        }
        this->data[this->cur]=b;
        this->id[this->cur]=a;
        this->cur++;
    }
    friend std::ostream &operator<<(std::ostream &s,const map_template &temp){
        for(int i=0;i<temp.cur;i++){
            s<<"\n";
            s<<temp.data[i];
            s<<"ID: "<<temp.id[i]<<"\n";
        }
        return s;
    }


};
#endif
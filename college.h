#ifndef COLLEGE_H
#define COLLEGE_H
#include<iostream>
#include<string>
#include <iterator>
#include "node.h"

class College{
public:

    College();
    ~College();

    void add(course& c);
    void remove(course& c);
    void display(std::ostream& outs);

private:

    std::string name;
    node* head;
    

};


#endif
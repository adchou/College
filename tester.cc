#include<iostream>
#include<string>
#include <fstream>
#include "course.h"
#include "node.h"
#include "college.h"

using namespace std;

int main()
{
course s;
cin >> s;

College c;

c.add(s);

c.display(cout);







}
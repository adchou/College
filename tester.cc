#include<iostream>
#include<string>
#include <fstream>
#include "course.h"
#include "node.h"
#include "college.h"

using namespace std;

int main()
{
College classes;
course s;
for(int i = 0; i <3; i++)
{
cin >> s;
classes.add(s);



}
 cout << endl << endl;
 classes.display(cout);


}
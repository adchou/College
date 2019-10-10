#include<iostream>
#include<string>
#include <cstring>
#include "course.h"
#include "college.h"

using namespace std;

College::College()
{
    head = NULL;
}

College::~College()
{
    //stores a pointer in order to walk through the array
    node* rmptr;

    //makes sure array is not empty
    while(head != NULL)
    {
        //set new pointer to head
        rmptr = head;
        
        //takes head and points it at the next link list from link();
        head = head -> link();

        //delete the old pointer
        delete rmptr;
    }
}

void College::add(course& c)
{
    node* cursor =  head;
    node* temp = new node;
    node* previous; 
   
    if(head == NULL)
    {
        head = new node;

        head->set_data(c);
        
        head->set_link(NULL);
    }
}
    else if(strcmp(head->cursor->data.get_course_number(), temp->cursor->data.get_course_number()) >= 0 )
    {
        
      temp->next = head;
      head = temp;
     
        

    }
    else
    {
        previous = head;
        cursor = head-> next;


        while((cursor != NULL) && strcmp(cursor->data.get_course_number(), temp->cursor->data.get_course_number())<0)
        {

            previous = cursor;
            cursor = cursor->next;
        }

            temp->next = previous->next;
            previous->next = temp;
    }
}

void College::display(std::ostream& outs)
{
    const node* cursor = head;

    while(cursor!= NULL)
    {
    cout << cursor->data()<< endl;
    cursor = cursor->link();
    }
}
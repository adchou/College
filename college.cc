#include<iostream>
#include<string>
#include <cstring>
#include <iterator>
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
    node* newNode = new node(c);


    
   
    

   //case 1 - Empty list
    if(head == NULL)
    {
        head = new node;

        head->set_data(c);
        
        head->set_link(NULL);

       
    }
    // case 2- Front of list (not empty)
    else
    {
         node* cursor = head;
         node* trail = NULL;

        newNode->set_link(cursor);
        //trail->set_link(newNode);

       //case 3 - Middle of list (sorted)
        
        //traverse the list to find the correct insert location
        while(cursor != NULL)
        {
            //check to see if the pointed at course number is greater of equal to the newNode
            if(cursor->data().get_course_number() >= newNode->data().get_course_number())
            {
                //set equal to the what is was pointing at
                cursor->set_data(c);
                cursor->set_link(newNode);
                break;
            }
            else
            {
                trail = cursor;
                cursor = cursor->link();

                // cursor->set_data(c);
                // cursor->set_link(trail);
              
                
            }
        }
    
        if(cursor == head)
        {
           head = newNode->link();
            head = newNode;

            head->set_data(c);
            head->set_link(newNode);
        }
        else
        {
            // cursor = newNode->link();
            // newNode = trail->link();

            cursor->set_data(c);
            cursor->set_link(newNode);

            
            
        }

 }
}

void remove(course& c)
{
    if(head == NULL)
    {
        cout << "Node cannot be deleted from empty list" << endl;
    }
    else
    {
        node* cursor = head;
        node* trail = NULL;
        
        //traverse list to find node to delete
        while(cursor != NULL)
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
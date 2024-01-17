/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Node
{
  public:    
  int data;
  Node* next;
  
  
     Node()
     {
       data =0;
       next = NULL;
     }
     Node(int x)
     {
         data =x ;
         next = NULL;
     }
};

class MyList
{
    Node *head;
   
    public:
    MyList()
    {
       head  = NULL; 
    }
    
    void push_back(int x)
    {
        //create a Node
        Node* newNode = new Node(x);
        if(head == NULL) //list is empty
        {
            head = newNode;
        }
        else
        {
            //go till last Node
            Node *temp=head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            
        }
        
    }
    void push_front(int x)
    {
         Node* newNode = new Node(x);
         if(head == NULL) //list is empty
        {
            head = newNode;
        }
        else
        {
           newNode->next = head;
           head= newNode;
        }
    }
    
    void print()
    {
        if(head== NULL)
        {           
            cout<<"List is empty";
           return ;
        }
        Node *temp=head;
        while(temp != NULL)
        {
            cout<<"Data = "<<temp->data<<" ";
            temp = temp->next;
        }
        
    }
    
    
};

int main()
{
    MyList a;
  //  a.push_front(1);
    a.push_back(2);
    a.push_front(3);
    a.push_back(4);
    a.print();
    
    return 0;
}
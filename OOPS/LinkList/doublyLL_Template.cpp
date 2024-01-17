/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
template <typename T>
class Node
{
  public:    
  T data;
  Node* next,*prev;
  
  
     Node()
     {
       data =0;
       next = NULL;
       prev=NULL;
     }
     Node(T x)
     {
         data =x ;
         next = NULL;
         prev=NULL;
     }
};

template <typename T>
class MyList
{
    Node<T> *head;
   
    public:
    MyList()
    {
       head  = NULL; 
    }
    
    void push_back(T x)
    {
        //create a Node
        Node<T>* newNode = new Node(x);
        if(head == NULL) //list is empty
        {
            head = newNode;
        }
        else
        {
            //go till last Node
            Node<T> *temp=head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev=temp;
            
        }
        
    }
    void push_front(T x)
    {
         Node<T>* newNode = new Node(x);
         if(head == NULL) //list is empty
        {
            head = newNode;
        }
        else
        {
           newNode->next = head;
           head->prev=newNode;
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
        Node<T> *temp=head;
        while(temp->next!= NULL)
        {
            cout<<"Data = "<<temp->data<<" ";
            temp = temp->next;
        }
        while(temp!= NULL)
        {
           cout<<"opp Data = "<<temp->data<<" ";
            temp = temp->prev; 
        }
        
        
    }
    
    
};

int main()
{
    MyList<float> a;
  //  a.push_front(1);
    a.push_back(2);
   
    a.push_back(4);
     a.push_front(3);
      a.push_front(30);
    a.print();
    
    return 0;
}
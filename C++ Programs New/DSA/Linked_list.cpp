#include<iostream>
#include<string.h>
using namespace std;

class Node
{
    Node* next;
    int data;

    public:

    Node(int data)
    {
        this ->data = data;
    }

    void setData(int data)
    {
        this -> data= data;
    }

    void setNext(Node* next)
    {
        this -> next = next;
    }

    Node* getNext()
    {
        return next;
    }

    int getData()
    {
        return data;
    }
};

class LinkedList
{
    Node* head;

    public:

    LinkedList(){
        head = NULL;
    }

    void addStart(int data)
    {
        Node* temp;
        temp = new Node(data);
        temp->setNext(head);
        head = temp;
    }

    void addEnd(int data){
        Node* temp = new Node(data);
        if(head==NULL)
        {
            head = temp;
        }else{
            Node* trav = head;
            while(trav->getNext()!=NULL){
                trav = trav->getNext();
            } 
             trav->setNext(temp);
        }
    }

    void deleteEnd()
    {
        if(head==NULL)
        {
            cout<<"Linked List is Empty";
        }else{
            Node* prev;
            Node* pres;

            prev = head;
            pres = head;

            while(pres -> getNext()!=NULL)
            {
                prev = pres;
                pres = pres -> getNext();
            }
                prev->setNext(NULL);
                delete pres;
        }
    }

    void deleteStart()
    {
        if(head==NULL)
        {
            cout<<"Linked List is Emty";
        }else{
            Node* temp = head;
            head = head-> getNext();
            delete temp; 
        }
    }

    void traverse()
    {
        Node* trav = head;
        while(trav->getNext()!=NULL)
        {
            cout<<trav->getData()<<endl;
            trav = trav->getNext();
        }     
            cout<<trav->getData()<<endl;
    }
};

int main()
{
    LinkedList obj;
    obj.addStart(23);
    obj.addStart(25);
    obj.addStart(26);
    obj.addStart(26);
    obj.addStart(27);
    obj.traverse();
}
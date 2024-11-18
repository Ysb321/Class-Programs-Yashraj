#include<iostream>
using namespace std;

class Node
{
    Node* prev;
    Node* next;
    int data;

public:

    Node(int data)
    {
        this->data = data;
        next = NULL;
        prev = NULL;
    }

    void setData(int data)
    {
        this->data = data;
    }

    void setPrev(Node* prev)
    {
        this->prev = prev;
    }

    void setNext(Node* next)
    {
        this->next = next;
    }

    Node* getPrev()
    {
        return prev;
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

class DoublyLinkedList
{
    Node* head;

    public:

    DoublyLinkedList()
    {
        head = 0;
    }

    void addStart(int data)
    {
        Node* temp = new Node(data);
        temp->setNext(head);
        head = temp;
        head->setPrev(NULL);
    }

    void addEnd(int data)
    {
        Node* temp = new Node(data);
        if(head==NULL)
        {
            head = temp;
        }else{
            Node* trav = new Node(data);
            while(trav->getNext()!=NULL)
            {
                trav = trav -> getNext();
            }
            trav->setNext(temp);
        }

    }

    void traverse()
    {
        Node* temp = head;
        while (temp != NULL)
        {
            cout << temp->getData() << " ";
            temp = temp->getNext();
        }
        cout << endl;
    }
};


int main()
{
    DoublyLinkedList obj;
    obj.addStart(12);
    obj.traverse();
}


#include <iostream>
using namespace std;

class Node
{
    Node* next;
    int data;

public:
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }

    void setData(int data)
    {
        this->data = data;
    }

    void setNext(Node* next)
    {
        this->next = next;
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
    LinkedList()
    {
        head = NULL;
    }

    void addStart(int data)
    {
        Node* temp = new Node(data);
        temp->setNext(head);
        head = temp;
    }

    void addEnd(int data)
    {
        Node* temp = new Node(data);
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            Node* trav = head;
            while (trav->getNext() != NULL)
            {
                trav = trav->getNext();
            }
            trav->setNext(temp);
        }
    }

    void deleteEnd()
    {
        if (head == NULL)
        {
            cout << "Linked List is Empty" << endl;
        }
        else
        {
            if (head->getNext() == NULL)
            {
                delete head;
                head = NULL;
            }
            else
            {
                Node* prev = head;
                Node* pres = head->getNext();

                while (pres->getNext() != NULL)
                {
                    prev = pres;
                    pres = pres->getNext();
                }
                prev->setNext(NULL);
                delete pres;
            }
        }
    }

    void deleteStart()
    {
        if (head == NULL)
        {
            cout << "Linked List is Empty" << endl;
        }
        else
        {
            Node* temp = head;
            head = head->getNext();
            delete temp;
        }
    }

    void traverse()
    {
        if (head == NULL)
        {
            cout << "Linked List is already empty" << endl;
        }
        else
        {
            Node* trav = head;
            while (trav != NULL)
            {
                cout << trav->getData() << endl;
                trav = trav->getNext();
            }
        }
    }
};

int main()
{
    LinkedList obj;
    obj.addStart(23);
    obj.addStart(25);
    obj.addStart(26);
    obj.deleteEnd();
    obj.addStart(29);
    obj.addEnd(22);
    obj.addEnd(24);
    obj.deleteStart();
    obj.addStart(27);
    obj.traverse();

    return 0;
}
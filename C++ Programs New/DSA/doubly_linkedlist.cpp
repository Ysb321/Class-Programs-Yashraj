#include <iostream>
using namespace std;

class Node
{
    Node *prev;
    Node *next;
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

    void setPrev(Node *prev)
    {
        this->prev = prev;
    }

    void setNext(Node *next)
    {
        this->next = next;
    }

    Node *getPrev()
    {
        return prev;
    }
    Node *getNext()
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
    Node *head;

public:
    DoublyLinkedList()
    {
        head = 0;
    }

    void addStart(int data)
    {
        Node *temp = new Node(data);
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            head->setPrev(temp);
            temp->setNext(head);
            head = temp;
        }
    }

    void addEnd(int data)
    {
        Node *temp = new Node(data);
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            Node *trav = head;
            while (trav->getNext() != NULL)
            {
                trav = trav->getNext();
            }
            trav->setNext(temp);
            temp->setPrev(trav);
        }
    }

    void deleteEnd()
    {
        if (head == NULL)
        {
            cout << "Linked list is empty." << endl;
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
                Node *prev = head;
                Node *pres = head->getNext();
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
        if (head == NULL) {
            cout << "List is already empty." << endl;
            return;
        }

        Node* temp = head;
        head = head->getNext();  
        if (head != NULL) {
            head->setPrev(NULL); 
        }
        delete temp; 
    }

    void addBetween(int data, int pos)
    {
        if (pos <= 0)
        {
            cout << "Invalid position" << endl;
            return;
        }
        if (pos == 1)
        {
            addStart(data);
            return;
        }
        Node* trav = head;
        int i = 1;
        while (i < pos - 1)
        {
            if (trav != NULL)
            {
                trav = trav->getNext();
            }
            else
            {
                cout << "Invalid position" << endl;
                return;
            }
            i++;
        }
        Node* temp = new Node(data);
        temp->setNext(trav->getNext());
        temp->setPrev(trav);
        if (trav->getNext() != NULL)
        {
            trav->getNext()->setPrev(temp);
        }
        trav->setNext(temp);
    }

    void traverse()
    {
        Node *temp = head;
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
    obj.addStart(12);
    obj.addStart(12);
    obj.addStart(34);
    obj.addEnd(144);
    obj.addEnd(144);
    obj.addBetween(223, 2);
    // obj.deleteEnd();
    // obj.deleteStart();
    obj.traverse();
}

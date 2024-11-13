#include<iostream>
using namespace std;

class Stack
{
    int arr[5];
    int top;

    public:
    Stack()
    {
        top = 0;
    }
    int isFull()
    {
        if(top == 5)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    int isEmpty()
    {
        if(top == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    void push(int data)
    {
        if(!isFull())
        {
            cout<<"Stack is full"<<endl;
        }
        else
        {
            arr[top] = data;
            top++;
            cout<<"Data is push"<<endl;
        }
    }
    void pop()
    {
        if(!isEmpty())
        {
            cout<<"Stack is empty already"<<endl;
        }
        else
        {
            top--;
            cout<<"Data is pop"<<endl;
        }
    }

    
    int traverse()
    {
        cout<<"stack is given by"<<endl;
        for(int i=top-1; i>=0; i--)
        {
            cout<<arr[i]<<endl;
        }
    }

    int peek()
    {
        if(!isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[top-1];
        }
    }
};

int main()
{

    Stack obj;
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);
    obj.pop();
    cout << "Top element is: " << obj.peek() << endl;
    obj.traverse();
}
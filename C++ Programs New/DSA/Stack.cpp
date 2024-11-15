#include<iostream>
using namespace std;

//Stack is the collection of data in LIFO pattern
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
        if(!isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
        }else
        {
        cout<<"stack is given by"<<endl;
        for(int i=top-1; i>=0; i--)
        {
            cout<<arr[i]<<endl;
        } 
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
    int num;
    int num2;
    char choice;
    do
    {
    cout<<"1.Push a Number"<<endl;
    cout<<"2.Pop a Number"<<endl;
    cout<<"3.Peek Stack"<<endl;
    cout<<"4.Traverse Stack"<<endl;
    cout<<"5.Exit"<<endl;
    cout<<"Enter a Number 1 to 5"<<endl;
    cin>>num;

    switch(num)
    {
        case 1:
         cout<<"Enter a number to push"<<endl;
         cin>>num2;
         obj.push(num2);
         obj.traverse();
         break;
        case 2:
         obj.pop();
         obj.traverse();
         break;
        case 3:
         obj.peek();
         obj.traverse();
         break;
        case 4:
         obj.traverse();
         break;
        case 5:
         cout<<"Exit"<<endl;
         return 0;
        default:
         cout<<"No option is selected."<<endl;
         
    }
        cout<<"Do you want to use again? (y/n)"<<endl;
        cin>>choice;
    
    }while(choice=='y'|| choice=='Y');
}
#include<iostream>
using namespace std;

class deQueue
{
    int arr[5];
    int rear;
    int front;

    int isFull()
    {
        if(rear==5)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int isEmpty()
    {
        if(front==rear)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    public:
    deQueue()
    {
        front = 0;
        rear = 0;
    }
    void insert(int data)
    {
        if(!isFull())
        {
            arr[rear]= data;
            rear++;
            cout<<"Data is inserted"<<endl;
            
        }
        else
        {

            cout<<"Stack is full"<<endl;
        }
    }

    void _delete()
    {
        if(!isEmpty())
        {
            front++;
            cout<<"Data is deleted"<<endl;
        }
        else
        {
            cout<<"Stack is Empty"<<endl;
        }
    }

    void traverse()
    {
        if(!isEmpty())
        {
            for(int i=front; i<rear; i++)
            {
                cout<<arr[i]<<endl;
            }
        }
        else
        {
            cout<<"Stack is Empty"<<endl;
        }
    }

};

int main()
{
    deQueue obj;
    int num;
    int num2;
    char choice;
    do
    {
    cout<<"1.Insert to Queue"<<endl;
    cout<<"2.Delete to Queue"<<endl;
    cout<<"3.Traverse Queue"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"Enter a Number 1 to 6"<<endl;
    cin>>num;

    switch(num)
    {
        case 1:
         cout<<"Enter a number to insert"<<endl;
         cin>>num2;
         obj.insert(num2);
         obj.traverse();
         break;
        case 2:
         obj._delete();
         obj.traverse();
         break;
        case 3:
         obj.traverse();
         break;
        case 4:
         cout<<"Exit"<<endl;
         return 0;
        default:
         cout<<"No option is selected."<<endl;
         
    }
        cout<<"Do you want to use again? (y/n)"<<endl;
        cin>>choice;
    
    }while(choice=='y'|| choice=='Y');
}


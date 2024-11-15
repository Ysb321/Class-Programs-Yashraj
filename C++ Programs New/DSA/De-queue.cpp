#include<iostream>
using namespace std;

//De-Queue is double Ended Queue in this queue follow LILO or FIFO pattern
// deletion and insertion will take place both end front and rear
class DeQueue
{
    int arr[5];
    int rear;
    int front;

    int isFull()
    {
        if(front==0 && rear==5)
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
    DeQueue()
    {
        front = 0;
        rear = 0;
    }
    void insertRear(int data)
    {
        if(!isFull())
        {
            if(rear==5)
            {
                cout<<"Try from front of stack."<<endl;
            }else
            {
            arr[rear]= data;
            rear++;
            cout<<"Data is inserted from rear"<<endl;
            }
            
        }
        else
        {

            cout<<"Stack is full"<<endl;
        }
    }

    void insertFront(int data)
    {
        if(!isFull())
        {
            if(front==0)
            {
                cout<<"Try From Rear of Stack"<<endl;
            }
            else
            {
            front--;
            arr[front]= data;
            cout<<"Data is inserted from front"<<endl;
            }
            
        }
        else
        {
            cout<<"Stack is full"<<endl;
        }
    }
    void deleteFront()
    {
        if(!isEmpty())
        {
            front++;
            cout<<"Data is deleted from front"<<endl;
        }
        else
        {
            cout<<"Stack is Empty"<<endl;
        }
    }
    void deleteRear()
    {
        if(!isEmpty())
        {
            rear--;
            cout<<"Data is deleted from rear"<<endl;
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
    DeQueue obj;
    int num;
    int num2;
    char choice;
    do
    {
    cout<<"1.Insert on front"<<endl;
    cout<<"2.Insert on rear"<<endl;
    cout<<"3.Delete from front"<<endl;
    cout<<"4.Delete from rear"<<endl;
    cout<<"5.Traverse Stack"<<endl;
    cout<<"6.Exit"<<endl;
    cout<<"Enter a Number 1 to 6"<<endl;
    cin>>num;

    switch(num)
    {
        case 1:
         cout<<"Enter a number to insert on front"<<endl;
         cin>>num2;
         obj.insertFront(num2);
         obj.traverse();
         break;
        case 2:
         cout<<"Enter a number to insert on Rear"<<endl;
         cin>>num2;
         obj.insertRear(num2);
         obj.traverse();
         break;
        case 3:
         obj.deleteFront();
         obj.traverse();
         break;
        case 4:
         obj.deleteRear();
         obj.traverse();
         break;
        case 5:
         obj.traverse();
         break;
        case 6:
         cout<<"Exit"<<endl;
         return 0;
        default:
         cout<<"No option is selected."<<endl;
         
    }
        cout<<"Do you want to use again? (y/n)"<<endl;
        cin>>choice;
    
    }while(choice=='y'|| choice=='Y');
}


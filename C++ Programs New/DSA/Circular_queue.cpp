#include<iostream>
using namespace std;

// In a Cicular Queue start and end of queue are attach to each other then it make circle. This Queue Follow FIFO

class CircularQueue{
    int arr[5], front, rear, count;

    int isFull()
    {
        if(count==5)
        {
            return 1;
        }else{
            return 0;
        }
    }

    int isEmpty()
    {
        if(count==0)
        {
            return 1;
        }else{
            return 0;
        }
    }
    
    public:

    CircularQueue()
    {
        front = 0;
        rear = 0;
        count = 0;
    }

    void insert(int data)
    {
        if(!isFull())
        {
            if(rear==5)
            {
                rear = 0;
            }
            arr[rear] = data;
            rear++;
            cout<<"rear is on "<<rear<<endl;
            count++;
        }else{
            cout<<"Queue is Full"<<endl;
        }
    }

    void _delete()
    {
        if(!isEmpty())
        {
            if(front==5)
            {
                front=0;
            }
            front++;
            cout<<"front is on "<<front<<endl;
            count--;
        }else{
            cout<<"Queue is Empty"<<endl;
        }
    }

    void traverse(){
        if(!isEmpty())
        {
            for(int i=1; i<=count; i++)
            {
                if(front==5)
                {
                    front=0;
                }
                cout<<arr[front]<<endl;
                front++;
            }
        }else{
            cout<<"Queue is Empty"<<endl;
        }
    }
};

int main()
{
    CircularQueue obj;
    // obj.insert(10);
    // obj.insert(30);
    // obj.insert(40);
    // obj._delete();
    // obj.insert(50);
    // obj.traverse();
    int num, num2;
    char choice;
    do{
        cout<<"1.Insert a Number in Circular Queue"<<endl;
        cout<<"2.Delete a Number in Circular Queue"<<endl;
        cout<<"3.Print Circular Queue"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter a Number between 1 to 4"<<endl; 
        cin>>num;
    
          
        switch(num)
        {
            case 1:
            cout<<"Enter a Number to Insert in queue:"<<endl;
            cin>>num2;
            obj.insert(num2);
            break;
            case 2:
            obj._delete();
            break;
            case 3:
            obj.traverse();
            break;
            case 4:
            cout<<"Exit"<<endl;
            return 0;
            default:
            cout<<"didn't enter a number"<<endl;
        }

        cout<<"Do you want to use it again?(y/n)"<<endl;
        cin>>choice;
    }while(choice=='y'||choice=='Y');
}
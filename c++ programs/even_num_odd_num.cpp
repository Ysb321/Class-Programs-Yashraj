#include<iostream>
using namespace std;

class even_num
{
    int* i;
    int* num;
    int result;
    public:
    even_num()
    {
        num = new int(12);
    }
    even_num(int i, int num)
    {
        this -> num = new int(num);
        this -> i = new int (i);
        cout<<"The Even Numbers are upto "<<num<<endl;
        for(; i<num; i++)
        {
            if(i%2==0)
            {
                cout << endl << i;
            }
        }
    }
    ~even_num()
    {
        delete num;
        delete i;
    }

    void display()
    {
        cout<<endl;
    }

};

class odd_num
{
    int* i;
    int* num;

    public:
    odd_num()
    {
       num = new int(12);
    }
    odd_num(int i, int num)
    {
        this -> i = new int(i);
        this -> num = new int(num);
        cout<<"Enter a Number upto getting odd number: "<< num <<endl;
        for(; i<num; i++)
        {
            if(i % 2 !=0)
            cout << endl << i;
        }
    }
    ~odd_num()
    {
        delete num;
        delete i;
    }

    void display()
    {
        cout <<endl;
    }
};

int main()
{
    even_num *ptr = new even_num(1, 21);
    ptr -> display();
    cout<<"+++++++"<<endl;
    odd_num *ptr2 = new odd_num(1, 21);
    ptr2 -> display();
    delete ptr;
    delete ptr2;
}
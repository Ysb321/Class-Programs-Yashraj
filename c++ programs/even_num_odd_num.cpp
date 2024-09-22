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
int main()
{
    even_num E;
    even_num E1(0, 21);
    E.display();
    E1.display();
}
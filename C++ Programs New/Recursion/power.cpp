#include<iostream>
using namespace std;

class Recursion
{
    int x;
    int y;
    public:

    Recursion()
    {
        x =1;
        y =1;
    }

    int power(int x, int y)
    {
        
        if(y==0)
        {
            return 1;
        }
        else
        {
            return x * power(x, y-1);
        }
    }
};

int main()
{
    Recursion obj;
    int result = obj.power(2, 2);
    cout<<"Power is: "<<result;
}
#include<iostream>
using namespace std;

class Recursion
{
   
    public:

    Recursion()
    {
      
    }

    int add(int num)
    {
        
        if(num==1)
        {
            return 1;
        }
        else
        {
            return num + add(num-1);
        }
    }
};

int main()
{
    Recursion obj;
    int result = obj.add(5);
    cout<<"Addition is: "<<result;
}
#include<iostream>
using namespace std;

class Recursion
{
    public:
    
    Recursion() {

    }

   
    void multiply(int x, int i, int limit)
    {
        if(i > limit)
        {
            return; 
        }
        else
        {
            cout << x << " * " << i << " = " << x * i << endl; 
            multiply(x, i + 1, limit); 
        }
    }

    void printTable(int x, int limit)
    {
        multiply(x, 1, limit);
    }
};

int main()
{
    Recursion obj;
    obj.printTable(2, 10); 
    return 0;
}

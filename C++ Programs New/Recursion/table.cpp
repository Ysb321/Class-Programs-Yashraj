#include<iostream>
using namespace std;

class Recursion
{
    int i;
    public:
    
    Recursion() {
        i = 1;
    }

   
    void multiply(int x, int limit)
    {
        if(i <= limit)
        {
            cout << x << " * " << i << " = " << x * i << endl; 
            i++;
            multiply(x, limit); 
        }
    }

};

int main()
{
    Recursion obj;
    obj.multiply(2, 10); 
    return 0;
}

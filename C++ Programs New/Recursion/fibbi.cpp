#include<iostream>
using namespace std;

class Recursion
{
    public:
    Recursion()
    {
     
    }

    int Fibbi(int num)
    {
        if(num<=1)
        {
            return num;
        }else{
            return Fibbi(num - 1) + Fibbi(num - 2);
        }
        
    }
    void printFibbiSeries(int n)
    {
        for(int i = 0; i < n; i++)
        {
            cout << Fibbi(i) << " ";
        }
        cout << endl;
    }
};

int main()
{
    Recursion obj;
    obj.printFibbiSeries(5);
    return 0;
}

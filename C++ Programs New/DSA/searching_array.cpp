#include<iostream>
using namespace std;

class LinearSearch{
    public:

    static void LinearSearching(int* arr, int size, int data)
    {
        int i;
        for(i=0; i<size; i++)
        {
            if(arr[i]==data)
            {
                cout<<data<<" is equal at position "<<i+1<<endl;
                return;
            }
        }
                cout<<"Match doesn't found in array."<<endl;
                
    }
};

int main()
{
    int arr[5] = {10, 23, 233, 55, 45};
    LinearSearch::LinearSearching(arr, 5, 23);
    return 0;
}

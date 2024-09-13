#include <iostream>
#include <string.h>
using namespace std;

class Array_Utility{
    int n;

    public:
    void arrayReverse()
    {
        int i, temp;
        int arr[n];
        cout<<"Enter the: "<<n<<" Numbers"<<endl;
        for(i=0; i<n; i++)
        {
            cin>> arr[i];
        };

        for(i=0; i<n/2; i++)
        {
            temp = arr[i];
            arr[i] = arr[n - 1 - i];
            arr[n- 1 -i] = temp;
        };
        cout<<"\nThe Reverse Array is given below"<<endl;
        for(i=0; i<n; i++)
        {
           cout<<endl<<arr[i];
        }
        cout<<endl;
    }

    void arrayAddition()
    {
        int i;
        int arr[n], arr1[n], arr2[n];
        cout<<"Enter a First array elements: "<<endl;
        for(i=0; i<n; i++){
        cin>>arr1[i];
        }
        cout<<"Enter a Second array elements: "<<endl;
        for(i=0; i<n; i++){
        cin>>arr2[i];
        }
        for(i=0; i<n; i++){
         arr[i] = arr1[i] + arr2[i];
        }
         cout<<"The Addition of two Array is given below: "<<endl;
        for(i=0; i<n; i++){
            cout<<endl<<arr[i];
        }
        cout<<endl;

    }

    Array_Utility()
    {
       n=0;
    };

    void enterValue(){
    cout<<"Enter Number of elements in the array"<<endl;
    cin>> n;
    cout<<"You have to enter "<<n<<" digits"<<endl;
    }
};

int main()
{
    Array_Utility R;
    cout<<"Array Reverse "<<endl;
    R.enterValue();
    R.arrayReverse();
    cout<<endl<<"+++++++++++++++"<<endl;

    cout<<"Addition of Two Array "<<endl;
    R.enterValue();
    R.arrayAddition();
    cout<<endl<<"+++++++++++++++"<<endl;

    return 0;

}


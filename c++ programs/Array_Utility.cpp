#include <iostream>
using namespace std;

class Array_Utility {
    int n;

public:
    void arrayReverse(int n ) {
        this->n = n;
        int i, temp;
        int arr[n];
        cout << "Enter the " << n << " Numbers" << endl;
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (i = 0; i < n / 2; i++) {
            temp = arr[i];
            arr[i] = arr[n - 1 - i];
            arr[n - 1 - i] = temp;
        }
        cout << "\nThe Reverse Array is given below" << endl;
        for (i = 0; i < n; i++) {
            cout << endl << arr[i];
        }
    }

    void arrayAddition(int n) {
        this->n = n;
        int i;
        int arr[n], arr1[n], arr2[n];
        cout << "Enter the first array elements: " << endl;
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        cout << "Enter the second array elements: " << endl;
        for (i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        for (i = 0; i < n; i++) {
            arr[i] = arr1[i] + arr2[i];
        }
        cout << "The Addition of the two arrays is given below: " << endl;
        for (i = 0; i < n; i++) {
            cout << endl << arr[i];
        }
    }

    void arrayMax(int n) {
        this->n = n;
        int arr[n], i;

        cout << "Enter " << n << " numbers:" << endl;
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int max_val = arr[0];

        for (i = 0; i < n; i++) {
            if (arr[i] > max_val) {
                max_val = arr[i];
            }
        }

        cout << "The maximum number in the array is: " << max_val << endl;
    }

    void arrayMin(int n) {
        this->n = n;
        int arr[n], i;

        cout << "Enter " << n << " numbers:" << endl;
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int min_val = arr[0];

        for (i = 0; i < n; i++) {
            if (arr[i] < min_val) {
                min_val = arr[i];
            }
        }

        cout << "The minimum number in the array is: " << min_val << endl;
    }

    Array_Utility() {
        n = 4;
    }
};

int main() {
    Array_Utility R;
    int value;
    char choice;

    cout<<"Enter elements in the array (default is 4), do you want to enter any value (y/n)?"<<endl;
    cin >> choice;

    if(choice == 'Y'|| choice == 'y'){
        cout<<"Enter number of elements in the array"<<endl;
        cin>>value; 
    }else{
        value = 4;
    }

    cout << "++++ Array Reverse ++++" << endl;
    R.arrayReverse(value);
    cout << endl << "+++++++++++++++" << endl;

    cout << "++++ Addition of Two Arrays ++++" << endl;
    R.arrayAddition(value);
    cout << endl << "+++++++++++++++" << endl;

    cout << "++++ Maximum Number in Array ++++" << endl;
    R.arrayMax(value);
    cout << endl << "+++++++++++++++" << endl;

    cout << "++++ Minimum Number in Array ++++" << endl;
    R.arrayMin(value);
    cout << endl << "+++++++++++++++" << endl;

    return 0;
}

#include <iostream>
using namespace std;

class Array_Utility {
    int *arr;

public:
    void arrayReverse(int *arr, int length) {

        int i, temp;
        cout<<"Original Array is: "<< endl;
        for (i = 0; i < length; i++) {
            cout << arr[i] << " ";
        }

        for (i = 0; i < length / 2; i++) {
            temp = arr[i];
            arr[i] = arr[length- 1 - i];
            arr[length - 1 - i] = temp;
        }
        cout << "\nThe Reverse Array is given below" << endl;
        for (i = 0; i < length; i++) {
            cout << arr[i] << " ";
        }
        cout<< endl;
    }

    void arrayAddition(int *arr1, int *arr2, int length) {
        int i;
        int arr[length];
        for (i = 0; i < length; i++) {
            arr[i] = arr1[i] + arr2[i];
        }
        
        cout << "\nThe Addition of the two arrays is given below: " << endl;
        for (i = 0; i < length; i++) {
            cout << arr[i] << " ";
        }
        cout<< endl;
    }

    void arrayMax(int *arr, int length) {
         int i;
        cout << "\nYou Enter " << length << " numbers:" << endl;
        for (i = 0; i < length; i++) {
            cout << arr[i] << " ";
        }

        int max_val = arr[0];

        for (i = 0; i < length; i++) {
            if (arr[i] > max_val) {
                max_val = arr[i];
            }
        }

        cout << "\nThe maximum number in the array is: " << max_val << endl;
    }

    void arrayMin(int *arr, int length) {
        int i;

        cout << "\nYou Enter " << length << " numbers:" << endl;
        for (i = 0; i < length; i++) {
            cout << arr[i]<< " ";
        }

        int min_val = arr[0];

        for (i = 0; i < length; i++) {
            if (arr[i] < min_val) {
                min_val = arr[i];
            }
        }

        cout << "\nThe minimum number in the array is: " << min_val << endl;
    }

//     Array_Utility() {
//         n = 4;
//     }
};

int main() {
    Array_Utility R;
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr)/sizeof(arr[0]);
    int arr1[] = {2,4,6,7,8};
    int arr2[] = {4,6,8,5,6};
    R.arrayReverse(arr, length);
    R.arrayAddition(arr1, arr2, length);
    R.arrayMax(arr, length);
    R.arrayMin(arr, length);
    return 0;
}

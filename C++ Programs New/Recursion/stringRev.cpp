#include <iostream>
#include <string.h>
using namespace std;

class StringRev {


    public:
    
    char* stringRev(char* str, int start, int end)
    {
        if (start >= end) {
            return str;
        }
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        return stringRev(str, start+1, end-1);
    }

    char* stringReverse(char* str) {
        int len = strlen(str);

        return stringRev(str, 0, len- 1);
    }
    
};

int main() {
    char str1[50];  

    cout << "Enter a String: ";
    gets(str1);  
    
    StringRev rev;
    char* result = rev.stringReverse(str1);

    cout << "String Reverse is " << result << endl;

    return 0;
}

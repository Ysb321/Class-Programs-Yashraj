#include <iostream>
#include <string.h>
using namespace std;

class StringRev {
public:
    char* stringReverse(char* str, int start, int end) {
        if (start >= end) {
            return str;
        }
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;


        return stringReverse(str, start + 1, end - 1);
    }
};

int main() {
    char str1[50];  
    int len = strlen(str1);

    cout << "Enter a String: ";
    gets(str1);  
    
    StringRev rev;
    char* result = rev.stringReverse(str1, 0, len - 1);

    cout << "String Reverse is " << result << endl;

    return 0;
}

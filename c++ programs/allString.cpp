#include <iostream>
using namespace std;

class String_Utility {
    char s2[100];
    int length;
public:
    void forStringCopy(const char s1[]) {
        int i;
        for (i = 0; s1[i] != '\0'; i++) {
            s2[i] = s1[i]; // stop loop until getting null
        }
        s2[i] = '\0';
    }

    void forStringLength(const char s1[]) {
        length = 0;
        for (int i = 0; s1[i] != '\0'; i++) {
            length++;
        }
    }

    void forStringContract(char s1[], const char s2[]) {
        int s1len = 0;
        int s2len = 0;

        while (s1[s1len] != '\0') {
            s1len++;
        }

        while (s2[s2len] != '\0') {
            s1[s1len] = s2[s2len];
            s1len++;
            s2len++;
        }

        s1[s1len] = '\0';
    }

    int forStringCompare(const char* s1, const char* s2) {
        for (; *s1 && (*s1 == *s2); s1++, s2++);
        return *s1 - *s2;
    }

    void forStringUpper(char str[]) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
        }
    }

    void forStringLower(char str[]) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + 32;
            }
        }
    }

    void forStringReverse(char str[]) {
        int end = length - 1;
        for (int start = 0; start < end; start++) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            end--;
        }
    }

    void display() {
        cout << "Copy of string is: " << s2 << endl;
        cout << "String length of " << s2 << " is: " << length << endl;
    }
};

int main() {
    String_Utility S;
    char s1[] = "Yashraj";
    S.forStringCopy(s1);
    S.forStringLength(s1);
    S.display();

    char base[100] = "hello";
    char s2[] = "world";
    S.forStringContract(base, s2);
    cout << "String concatenation: " << base << endl;

    int result1 = S.forStringCompare(s1, s2);
    char s3[] = "Yashraj";
    int result2 = S.forStringCompare(s1, s3);

    cout << "Comparing s1 and s2: " << result1 << endl;  
    cout << "Comparing s1 and s3: " << result2 << endl;  

    S.forStringUpper(s1);
    cout << "Uppercase string: " << s1 << endl;

    S.forStringLower(s1);
    cout << "Lowercase string: " << s1 << endl;

    S.forStringReverse(s1);
    cout << "Reversed string: " << s1 << endl;

    return 0;
}

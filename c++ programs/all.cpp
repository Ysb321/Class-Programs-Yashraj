#include <iostream>
using namespace std;

class String_Utility {
    char s2[100];
    int length;
    
public:
    void forStringCopy(char *s1) {
        int i;
        for (i = 0; s1[i] != '\0'; i++) {
            s2[i] = s1[i];
        }
        s2[i] = '\0';
    }

    void forStringLength(char *s1) {
        length = 1;
        for (int i = 1; s1[i] != '\0'; i++) {
            length++;
        }
    }

    void forStringConcat(char *s1, const char *s2) {
        int s1Len = 0;

        while (s1[s1Len] != '\0') {
            s1Len++;
        }

        for (char s2Len = 0; s2[s2Len] != '\0'; s2Len++) {
            s1[s1Len] = s2[s2Len];
            s1Len++;
        }

        s1[s1Len] = '\0';
    }

    void display(char *s1) {
        cout << "Copy of string is: " << s2 << endl;
        cout << "String length of " << s2 << " is: " << length << endl;
        cout << "Concatenated String: " << s1 << endl;
    }
};

int main() {
    String_Utility S;
    char s1[100] = "Hello";
    S.forStringCopy(s1);
    S.forStringLength(s1);
    char s2[100] = " world";
    S.forStringConcat(s1, s2);
    S.display(s1);
    return 0;
}

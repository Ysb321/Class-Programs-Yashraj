#include<iostream>
using namespace std;

class String_Utility{
    char s2[100];
    int length;
    public:

    void forStringCopy(char s1[])
    {
        int i;
        for(i = 0; s1[i] != '\0'; i++){
            s2[i] = s1[i]; // stop loop until getting null
        }
        s2[i] = '\0';
    }

    void forStringlength(char s1[])
    {
        length = 0;
        for(int i = 0; s1[i] != '\0'; i++)
        {
            length++;
        }
    }

    void forStringcontract(char s1[], char s2[])
    {
       int s1len = 0;
       int s2len = 0;

       while(s1[s1len] != '\0'){
         s1len++;
       }

       while (s2[s2len] != '\0') {
        s1[s1len] = s2[s2len];
        s1len++;    
        s2len++;
    }

    s2[s2len] = '\0';
    }

    int forStringCompare(char* s1, char* s2)
    {
        for(; *s1 && (*s1 == *s2); s1++, s2++){
            *s1 - *s2;
        }
    };

    void display()
    {   
        cout << "Copy of string is: " << s2 << endl;
        cout << "String length of " << s2 << "  is: " << length << endl;
    }
};

int main()
{
    String_Utility S;
    char s1[] = "Yashraj";
    S.forStringCopy(s1);
    S.forStringlength(s1);
    char base[100] = "hello";
    char s2[] = "world";
    char s3[] = "Yashraj";
    S.forStringcontract(base, s2);
    S.display();
    cout << "strcont: "<<base<<endl;

    int result1 = S.forStringCompare(s1, s2);
    int result2 = S.forStringCompare(s1, s3);

    cout << "Comparing str1 and str2: " << result1 << endl; 
    cout << "Comparing str1 and str3: " << result2 << endl; 
    return 0;
}

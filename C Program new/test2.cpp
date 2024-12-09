// #include<iostream>
// #include<string.h>
// using namespace std;

// char* strreverse(char*);
// int main()
// {
//     char str[20];
//     char* reverse;

//     cout<<"Enter a String: "<<endl;
//     gets(str);

//    reverse =  strreverse(str);
//    cout<<"Reverse of Given String is: "<<reverse<<endl;
//     return 0;
// }

// char* strreverse(char* ptr)
// {   char temp;
//     int len;
//     int i;
//     len = strlen(ptr);

//     for(i=0; i<len/2; i++)
//     {
//         temp = ptr[len-1-i];
//         ptr[len-1-i] = ptr[i];
//         ptr[i] = temp;
//     }
//     return ptr;
// }

// #include<iostream>
// using namespace std;

// char* stringUpper(char*);

// int main()
// {
//     char str[20];
//     char* result;
    
//     cout<<"Enter a String: "<<endl;
//     gets(str);

//     result = stringUpper(str);
//     cout<<"Upper of string: "<<result<<endl;
// }

// char* stringUpper(char* ptr)
// {
//     int i;
//     for(i=0; i!=ptr['\0']; i++)
//     {
//         if(ptr[i]>='a' && ptr[i]<='z')
//         {
//             ptr[i] = ptr[i] - 32;
//         }
//     }
//     return ptr;
// }

#include<iostream>
#include<string.h>
using namespace std;

char* stringConc(char*, char*);

int main()
{
    char str1[30];
    char str2[30];
    char* result;
    cout<<"Enter a First String: "<<endl;
    gets(str1);
    cout<<"Enter a Second String: "<<endl;
    gets(str2);
    result = stringConc(str1, str2);
    cout<<"Concat of String: "<<result<<endl;
    return 0;
}

char* stringConc(char* ptr1, char* ptr2)
{
    int len;
    int i;
    len = strlen(ptr1);
    for(i=0; i<ptr1['\0']; i++)
    {
        ptr1[len+i] = ptr2[i];
    }
    return ptr1;
}
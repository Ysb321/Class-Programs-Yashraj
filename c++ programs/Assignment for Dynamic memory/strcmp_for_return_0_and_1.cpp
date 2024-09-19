#include <iostream>
#include <string.h>
using namespace std;

class String
{   char* str1;
    char* str2;
    public:
    int str_cmp(char* str1, char* str2)
    {
        bool areSame = true;
        this -> str1 = new char(strlen(str1)+1);
        this -> str2 = new char(strlen(str2)+1);
        strcpy(this -> str1, str1);
        strcpy(this -> str2, str2);

        int strlen1 = strlen(str1);
        int strlen2 = strlen(str2); 

        if(strlen1 != strlen2)
        {
            cout << "The length of both string are not equal."<<endl;
        }
        else
        {
            for(int i = 0; str1[i] != '\0'; i++)
            {
                if(str1[i] != str2[i])
                {      
                    areSame = false;        
                }
            }
        }

        if(areSame)
        {
            return 0;
        }
        else
        {
            return 1;
        }


    }

     ~String()
    {
        delete [] str1;
        delete [] str2;
    }


    void display()
    {
        cout << "1st string is: "<< str1<<endl;
        cout << "2st string is: "<< str2<<endl;
    }
};

int main()
{
    String S;
    int result = S.str_cmp("Yashraj", "Yashraj");
    S.display();
    cout<<"The Result of String Comparison is: "<< result <<endl;
}
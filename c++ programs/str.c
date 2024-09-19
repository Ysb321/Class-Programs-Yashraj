#include<stdio.h>
int main()
{
    char str1[50];

    printf("Enter string\n");
    // scanf("%s", str1); // terninate on both while space and enter it will print "Hello"
    gets(str1); // it will terminate on enter it will print complete "Hello world"
    printf("%s", str1);
}

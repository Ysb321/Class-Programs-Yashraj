#include <stdio.h>
#include <string.h>
typedef char CHRArr[40];
typedef unsigned char BYTE;
int main()
{
    CHRArr name;
    CHRArr city;
    BYTE age;
    strcpy(name, "Denis Ritche");
    strcpy(city, "USA");
    age = 69;
    printf("\nName = %s", name);
    printf("\nCity = %s", city);
    printf("\nAge = %u", age);
    return 0;
}
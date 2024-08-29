#include <stdio.h>
void recurse_fun()
{
    printf("\nWelcome to sankalan Data Technologies.");
    recurse_fun();
}
int main()
{
    printf("\nCall the recurse-function");
    recurse_fun();
    return 0;
}
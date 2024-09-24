// Checking Tringle or not.
#include <stdio.h>
int main()
{
    int angle1, angle2, angle3, Total;

    printf("Enter a all angles of triangle in degree.\n");
    scanf("%d%d%d", &angle1, &angle2, &angle3);

    Total = angle1 + angle2 + angle3;

    if (Total == 180)
    {
        printf("This is a Tringle.\n");
    }
    else
    {
        printf("This is not a Tringle.\n");
    }
    return 0;
}
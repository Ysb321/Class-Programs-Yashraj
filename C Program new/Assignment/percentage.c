// Finding percentage of 5 subject marks.
#include <stdio.h>
int main()
{
    int phy, che, math, bio, eng, total;
    float percentage;

    printf("Enter Marks of Physics, Chemistry, Math, Biology, English.\n");
    scanf("%d%d%d%d%d", &phy, &che, &math, &bio, &eng);

    total = phy + che + math + bio + eng;

    percentage = (total/500.0) * 100;

    printf("Percentage of all five subject is %f\n", percentage);

    if(percentage>=60)
    {
        printf("Student is Pass.\n");
    }else
    {
        printf("Student is Fail.\n");
    }
    return 0;
}
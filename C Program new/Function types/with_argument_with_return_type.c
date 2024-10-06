#include <stdio.h>

float sum(float, float);

int main()
{
    float x;
    float y;
    float add;
    printf("Enter first and second number:\n");
    scanf("%f%f", &x, &y);
    add = sum(x, y);
    printf("Addition of %f and %f is %f ", x, y, add);
    return 0;
}

float sum(float a, float b)
{
    float add;
    add = a + b;
    return add;
}

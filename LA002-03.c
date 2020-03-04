#include <stdio.h>
int main ()
{
    float x1, y1;
    float x2, y2;
    float x;
    float y;
    printf("Entre point 1: ");
    scanf("%f %f", &x1, &y1); // Read point two from user

    printf("Entre point 2: ");
    scanf("%f %f", &x2, &y2); // Read point two from user
    printf("Enter a value: ");
    scanf("%f", &x);

    y = ((y2-y1)/(x1-x2))*(x-x1)+y1;
    printf("%f\n", y);

    return 0;
}

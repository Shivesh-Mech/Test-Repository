#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, D, x1, x2, x3;
    printf("Enter value for a: ");
    scanf("%d,", &a);
    printf("Enter value for b: ");
    scanf("%d,", &b);
    printf("Enter value for c: ");
    scanf("%d,", &c);
    D = b*b - 4*a*c;
    if (D < 0){
    // (N = 0)//
    printf("There are no solutions\n");
    }
    else if (D == 0){
    //(N = 1);//
    x1 = (-b)/(2*a);
    printf("There is one solutition: %d\n", x1);
    }
    else if (D > 0)
    {
    //(N = 2);//
    x2 = (-b + sqrt(D))/(2*a);
    x3 = (-b - sqrt(D))/(2*a);
    printf("There are two solutions: %d and %d \n", x2, x3);
    }
    return 0;
}

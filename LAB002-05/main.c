#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x = 1, count = 0, n; // need to specify and have values for it to work//
    printf("Enter a float: ");
    scanf("%f", &n);

    while (count < 10){
    x = (0.5)*(x + n/x);
    c++;
    }
    printf("%f\n", x);



    return 0;
}

#include <stdlib.h>

int main()
{
    int a, b, q, r;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter an integer: ");
    scanf("%d", &b);
    if(b == 0)
        printf("Devision by Zero Error\n", b);
    else;
        q = (a/b);
        r = (a%b);
        printf("%d\n", q);
        printf("%d\n", r);
    return 0;
}

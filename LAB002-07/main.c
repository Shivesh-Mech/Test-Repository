#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, Three, counter = 0;
    while (counter < 10000000){
        a = rand()&6 + 1;
        b = rand()&6 + 1;
    if (a == 3||b == 3){
            Three = Three + 1;
    }
    counter =  counter +1;
    }
    Three = Three/counter;
    printf("%f\n", Three);
    return 0;
}

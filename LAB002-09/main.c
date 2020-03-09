#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counttotal = 0, countinside = 0;
    float x, y, pi;
        while (counttotal < 100000)
        {
            x = (float)rand()/RAND_MAX;
            y = (float)rand()/RAND_MAX;

            counttotal++;
            if(x*x + y*y < 1){
            countinside++;
            }
        }
    pi= 4.0*(countinside/counttotal)
    printf("%f", pi);
    return 0;
}

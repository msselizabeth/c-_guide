#include <stdio.h>
#include <math.h>

int main(void)
{
    double i, max;
    max = 1.0;

    // table header
    printf("x\t\t sin(x)\t\t cos(x)\n");

    for (i = 0.0; i <= max; i += 0.1)
    {
        // table values for each 0.1 step
        printf("%0.1f\t\t %0.4f\t\t %0.4f\n", i, sin(i), cos(i));
    }
    
    return 0;
}
#include <stdio.h>

int main()
{
    int statement = 10;
    short counter = 0;

    // while (counter < statement)
    // {
    //     counter+=2;
    // }
    // printf("Counter is: %d", counter);
    for (int i = 0; i < statement; i++)
    {
        printf("It's a %d iteration with i= %d\n", i, i);
    }

    return 0;
}
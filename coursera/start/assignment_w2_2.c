#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, result;
    char *message;
    int is_valid;

    printf("Enter a value between 0 and 1 (non-inclusive): ");
    scanf("%lf", &x);

    // checking if 0 < x < 1 then calc sin(x), otherwise return 0.0;
    is_valid = (x > 0.0 && x < 1.0);
    result = is_valid ? sin(x) : 0.0;
    // Print info message depends on value of X
    message = is_valid ? "Sine: " : "Not valid X.\n" ;

    printf("%s", message);
    is_valid && printf("%lf\n", result);
    return 0;
}
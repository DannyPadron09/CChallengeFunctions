#include <stdio.h>
#include <stdlib.h>

int gcd(int x, int y);

int main()
{

    int result = 0;

    result = gcd(150, 35);
    printf("The gcd of 150 and 35 is %d\n", result);

    result = gcd(1026, 405);
    printf("The gcd of 1026 and 405 is %d\n", result);

    printf("The gcd of 83 and 240 is %d\n\n\n\n", gcd(83, 240));


    return 0;
}

int gcd(int x, int y)
{

    int temp;

    while( y != 0)
    {
        temp = x % y;
        x = y;
        y = temp;
    }

    return x;

}
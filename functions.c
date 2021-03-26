#include <stdio.h>
#include <stdlib.h>

int gcd(int x, int y);
float absoluteValue(float z);

int main()
{
    int result = 0;
    float absoluteValueResult = 0.0;
    float f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int i1 = -716;

    // Testing gcd Function

    result = gcd(150, 35);
    printf("The gcd of 150 and 35 is %d\n", result);

    result = gcd(1026, 405);
    printf("The gcd of 1026 and 405 is %d\n", result);

    printf("The gcd of 83 and 240 is %d\n\n\n\n", gcd(83, 240));

    // Testing absoluteValue Function
    



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

float absoluteValue(float z)
{
    if (z < 0)
        z = -z;

    return z;
}
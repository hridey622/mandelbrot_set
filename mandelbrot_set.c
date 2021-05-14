#include <stdio.h>
#include <math.h>
float set(float i, float j)
{
    float c;
    float a = i, b = j;
    long long int m;
    for (m = 1; m <= 100000; m++)
    {
        c = i;
        i = i * i - j * j;
        j = 2 * c * j;
        i = i + a;
        j = j + b;
        c = i;
        if (sqrt(i * i + j * j) <= 2)
            continue;
        else
            break;
    }
    if (m == 100001)
        return 1;
    else
        return 0;
}
int main()
{

    for (float i = -2; i <= 1; i = i + 0.01)
    {
        for (float j = -2; j <= 2; j = j + 0.01)
        {
            if (set(i, j) == 1)
                printf("●\033[0;33m");
            else
                printf("●\033[0;30m");
        }
        printf("\n");
    }
}

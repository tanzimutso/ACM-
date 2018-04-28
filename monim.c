#include <stdio.h>

int main()
{
    float c, f, a;
    int n;

    scanf("%d", &n);
    while(n--)
    {
        scanf("%f %f", &c, &a);
        c=5*(((9/5)*c)-32+a+32);
        printf("%.2f\n", c);
    }
    return 0;
}

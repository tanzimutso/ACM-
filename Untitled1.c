#include <stdio.h>

int main()
{
    float c, f, a, r;
    int n;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%f %f", &r, &a);

        f = r*9/5-32+a;
        printf("%f   ",f);
        r=((f+32)*5)/9;
        printf("%.2f\n", r);
    }
    return 0;
}

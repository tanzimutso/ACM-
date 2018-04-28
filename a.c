#include <stdio.h>

int main()
{
    int i, j, k, x[4][3][5];
    for(i=0,j=0,k=0; i<5, j<4, k<6; i++, j++, k++)
    {
        scanf("%d", &x[i][j][k]);
    }
    for(i=0,j=0,k=0; i<5, j<4, k<6; i++, j++, k++)
    {
        printf("%d", x[i][j][k]);
    }
}

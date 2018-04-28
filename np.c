#include<stdio.h>

int main()
{

int n, i,tp = 0, tn = 0;
while(scanf("%d",&n)!=EOF)
{


if(n>0)

tp ++;
else if(n<0)
tn ++;

printf("%d %d\n",tp,tn);

}

return 0;

}

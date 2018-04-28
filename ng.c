#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    switch(n/10)
    {
      case 4:
      {printf("d");}
      break;
      case 5:
      {printf("b");}
      break;
      case 6:
      {printf("b+");}
      break;
      case 7:
      {printf("a");}
      break;
      case 8:
      {printf("a+");}
      break;
    }
}

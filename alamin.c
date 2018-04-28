#include<stdio.h>
int main()
{
    int a,i,max=0,min=0,t;
    char ch;
    scanf("%d",&t);
    while(t--){
            scanf("%d%c",&a,&ch);
    min = max = a;
    while(ch != '\n')
    {
        scanf("%d",&a);
        i=a;
        scanf("%c",&ch);
        if(a>max)
            max=a;
            if(i<min)
                min=i;
        //if(ch=='\n')
            //break;
    }
    printf("MAX= %d ..... MIN= %d\n",max,min);
    }
    return 0;
}

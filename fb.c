#‎include‬<stdio.h>
int main()
{
int i,t1,t2,n,t3;
printf("please enter your number:");
scanf("%d",&n);
t1=0;
t2=1;
printf("%d %d",t1,t2);
for(i=2;i<=n;i++)
{
t3=t1+t2;
t1=t2;
t2=t3;
printf(" %d",t3);
}

return 0;
}

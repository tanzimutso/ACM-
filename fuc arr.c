/*#include <stdio.h>
int main()
{
    float b;
    int a;
    while(scanf("%d%f",&a,&b)==2)
    {
        switch(a)
        {
        case 1:
            printf("Total: R$ %.2f\n",4.00*b);
            break;
        case 2:
            printf("Total: R$ %.2f\n",4.50*b);
            break;
        case 3:
            printf("Total: R$ %.2f\n",5.00*b);
            break;
        case 4:
            printf("Total: R$ %.2f\n",2.00*b);
            break;
        case 5:
            printf("Total: R$ %.2f\n",1.50*b);
            break;
            default:
            printf("not correct\n");
            break;
        }
    }
    return 0;

}
*/
/*#include<stdio.h>
int main()
{
    float a;
    while(scanf("%f",&a)==1){
        if(a>=0&&a<=25)
        printf("Intervalo [0,25]\n");
        else if(a>25&&a<=50)
            printf("Intervalo (25,50]\n");
        else if(a>50&&a<=75)
             printf("Intervalo (50,75]\n");
        else if(a>75&&a<=100)
             printf("Intervalo (75,100]\n");
        else
            printf("Fora de intervalo\n");
    }
    return 0;
}
*/
/*#include<stdio.h>
int factorial(int a,int b)
{
    int i,sum=1;
    for(i=1;i<=a;i++){
        sum*=i;
        return sum;
    }

}
    int main(){
    int sum,a,b;
    while(scanf("%d%d",&a,&b)==2){
        factorial(a,b);
        printf("%d\n",);
    }
return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int a,b;
    long long int i,j,s=1,d=1;
    while(scanf("%d%d",&a,&b)!=EOF){
            if((a>=0&&a<=20)&&(b>=0&&b<=20)){
        for(i=a;i>=1;i--){
            s=s*i;
        }
         for(j=b;j>=1;j--){
        d=d*j;
         }
    printf("%lld\n",s+d);
}
    }
return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n%2==0){
    for(i=n;i<=n+12;i++){
        if(i%2!=0)
            printf("%d\n",i);
}
    }
    else
    {
    for(i=n;i<=n+11;i++){
        if(i%2!=0)
            printf("%d\n",i);
    }
    }
return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int a;
   while(scanf("%d",&a)==1){
    switch(a)
    {
    case 1:
        printf("January\n");
        break;
    case 2:
        printf("February\n");
        break;
    case 3:
        printf("March\n");
        break;
    case 4:
        printf("April\n");
        break;
    case 5:
        printf("May\n");
        break;
    case 6:
        printf("June\n");
        break;
    case 7:
        printf("July\n");
        break;
    case 8:
        printf("August\n");
        break;
    case 9:
        printf("September\n");
        break;
    case 10:
        printf("October\n");
        break;
    case 11:
        printf("November\n");
        break;
    case 12:
        printf("December\n");
        break;
    default:
        break;
    }
   }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)==4){
        if((b>c&&d>a)&&(c+d>a+b)&&(c>0&&d>0)&&(a%2==0))
            printf("Valores aceitos\n");
        else
        printf("Valores nao aceitos\n");

    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    while(scanf("%d%d",&a,&b)==2){
        for(i=a;i<=b;i++){
            if(i%2!=0){
                 if(i<0&&i%2==-1)
            sum=sum+i;
            }
    }
    printf("%d\n",sum);
}
return 0;
}

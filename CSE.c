#include<stdio.h>

int main()
{
    printf("Enter 0 to exit\n");
    unsigned short int num = 1;

    while(num!=0){

    printf("\n\nEnter a number (<=25): ");


    int i,j,k;

    scanf("%u",&num);

    printf("\n");

    for(i=0;i<3;i++){
        for(j=0;j<num;j++){
                printf("*");
    }
    printf(" ");
    }
    for(i=0;i<num/2;i++){
            printf("\n*");
        for(k=0;k<2;k++){
            for(j=0;j<num;j++){
            printf(" ");}
            printf("*");}
          }
    printf("\n*");
    for(i=0;i<num;i++)
        printf(" ");

    for(i=0;i<2;i++){
        for(j=0;j<num;j++){
            printf("*");
        }
        printf(" ");
}
   for(i=0;i<num/2;i++){
    printf("\n*");
    for(k=1;k<num*2-1;k++){
        printf(" ");
    }
    printf(" * *");
   }
printf("\n");
      for(i=0;i<3;i++){
        for(j=0;j<num;j++){
                printf("*");
    }
    printf(" ");
    }

    }

return 0;
}


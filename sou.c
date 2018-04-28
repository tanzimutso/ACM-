#include <stdio.h>

int main(void)
{

short int i=1,sum=0,count=0;
float average=0;
printf("Enter 0 to finish\n");

while (i!=0){
printf("Enter next number: ");
scanf("%hd",&i);
sum+=i;
if(i!=0)
count++;
}
if(count!=0)
average = (float)sum/count;
printf("Avarege is %f",average);

char str[80];
printf("\n Enter your feedback: ");
gets(str);

printf(str);

return 0;
}

#include<stdio.h>
int main()
{
    char ch;
    printf("enter an alphabet: ");
    scanf("%c", &ch);
    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')){
        printf("the alphabet is a vowel");

    }
    else{
        printf("the alphabet is a consonant");
    }
}

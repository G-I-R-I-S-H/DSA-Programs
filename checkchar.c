#include<stdio.h>
main(){
char ch;
printf("Enter a character from keyboard\n");
scanf("%c",&ch);
if(ch>='A'&&ch<='Z')
    printf("Capital letter\n");
else if(ch>='a'&&ch<='z')
    printf("Small case letter\n");
else if(ch>='0'&&ch<='9')
    printf("Letter is digit\n");
else
    printf("Special Symbol");

}

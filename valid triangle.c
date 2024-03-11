#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a,b,c;
     printf("Enter three sides:");
     scanf("%d %d %d",&a,&b,&c);
     if(a+b>c)
      printf("Traingle is valid");
     else
      printf("Triangle is invalid");
}

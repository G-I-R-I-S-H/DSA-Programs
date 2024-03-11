#include<stdio.h>
void swap(int a,int b);
main(){
int a,b;
printf("Enter the two integer numbers\n");
scanf("%d%d",&a,&b);
printf("Before swapping a=%d\t b=%d\n",a,b);
swap(a,b);
}
void swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("After swapping a=%d\t b=%d",a,b);

}


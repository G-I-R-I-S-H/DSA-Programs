
#include<stdio.h>
void read(int A[10],int n);
void print(int A[10],int n);
void search(int A[10],int n);
main()
{
int A[10],n;
printf("Enter the limit\n");
scanf("%d",&n);
read(A,n);
print(A,n);
lar_sma(A,n);
}
void read(int A[10],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);

}
void print(int A[10],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d",A[i]);

}
void search(int A[10],int n)
{
 int k=9,i,c;
 for(i=0;i<n;i++)
 {
     if(key==A[i])
        c++;

 }
 printf("The number of key elements in the array is %d",c);

}

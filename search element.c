#include<stdio.h>
main()
{
    int a[10],i,flag=0,n,key;
    scanf("%d",&n);
    printf("Enter %d in an array ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d  ",&a[i]);
    }
    printf("Search element number  \n");
        scanf(" %d",&key);
        for(i=0;i<n;i++)
        {
            flag++;
            if(key==a[i])
            printf("%d",flag);

        }
}

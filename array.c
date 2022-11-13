#include<stdio.h>
void main()
{
    int a[20];

    printf("enter a number");
    
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

    }


     printf("The numbers are");
     
     for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
        
    }



}
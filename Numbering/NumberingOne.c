#include<stdio.h>
#include<conio.h>
void main()
{
    int size,i,j;

    printf("Please Enter the Size of Array:");
    scanf("%d",&size);

    int num[size],temp;

    for(i=0;i<size;i++)
    {
        printf("Enter value of array [%d]:",i+1);
        scanf("%d",&num[i]);
    }

    for(i=0;i<size;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(num[j]>=num[j+1])
            {
                temp=num[j+1];
                num[j+1]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("Minimum value of Array is :%d\n",num[0]);
    printf("Maximum value of Array is :%d",num[size-1]);
    getch();
}


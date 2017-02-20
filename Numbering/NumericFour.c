#include <stdio.h>
#include <conio.h>

void main()
{
    int size,i,first,second,val[2];

    printf("Please Enter the Size of Array:");
    scanf("%d",&size);
    int num[size],temp;

    for(i=0;i<size;i++)
    {
        printf("Enter value of array [%d]:",i+1);
        scanf("%d",&num[i]);
    }
    printf("Enter First value want to swap :");
    scanf("%d",&first);
    printf("Enter Second Value want to swap :");
    scanf("%d",&second);

    for(i=0;i<size;++i)
    {
        if(num[i]==first)
        {
            val[0]=i;
        }
        if(num[i]==second)
        {
            val[1]=i;
        }
    }
    temp=num[val[0]];
    num[val[0]]=num[val[1]];
    num[val[1]]=temp;
    printf("Swapped Array is:\n");
    for(i=0;i<size;++i)
    {
        printf("%d\n",num[i]);
    }
    getch();
}



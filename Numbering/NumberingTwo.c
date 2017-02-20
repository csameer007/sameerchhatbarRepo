#include <stdio.h>
#include <conio.h>
void main()
{
    int size,i,j;
    printf("Please Enter the Size of Array:");
    scanf("%d",&size);

    int num[size],find,check=0;
    for(i=0;i<size;i++)
    {
        printf("Enter value of array [%d]:",i+1);
        scanf("%d",&num[i]);
    }

    printf("Please Enter the no u want to find : ");
    scanf("%d",&find);

    for(i=0;i<size;i++)
    {
        if(num[i]==find)
        {
            check=1;
        }
    }

    if(check==1)
    {
        printf("Value Found in Array");
    }
    else
    {
        printf("Value Not Found");
    }
    getch();

}

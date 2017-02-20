#include <stdio.h>
#include <conio.h>
void main()
{
    int size,i,j,choice;

    printf("Please Enter the Size of Array:");
    scanf("%d",&size);

    int num[size],temp;

    for(i=0;i<size;i++)
    {
        printf("Enter value of array [%d]:",i+1);
        scanf("%d",&num[i]);
    }
    while(1)
    {
        printf("1. Sort Array in Assending\n");
        printf("2. Sort Array in Desending\n");
        printf("Enter Choice : -");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                for(i=0;i<size;++i)
                {
                    for(j=i+1;j<size;++j)
                    {
                        if(num[i]>=num[j])
                        {
                            temp=num[j];
                            num[j]=num[i];
                            num[i]=temp;
                        }
                    }
                }
                printf("Sorted Array Ascending wise\n");
                for(i=0;i<size;++i)
                {
                    printf("%d\n",num[i]);
                }
                break;
            case 2:
                for(i=0;i<size;++i)
                {
                    for(j=i+1;j<size;++j)
                    {
                        if(num[i]<=num[j])
                        {
                            temp=num[j];
                            num[j]=num[i];
                            num[i]=temp;
                        }
                    }
                }
                printf("Sorted Array Descending wise\n");
                for(i=0;i<size;++i)
                {
                    printf("%d\n",num[i]);
                }
                break;
            case 3:
                return 0;

        }
    }


    getch();

}

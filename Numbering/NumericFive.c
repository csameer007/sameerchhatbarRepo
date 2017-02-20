#include<stdion.h>
#include<conio.h>
void main()
{
    int no,i,check=0;

    printf("Enter Number :");
    scanf("%d",&no);

    for(i=2;i<no/2;++i)
    {
        if(no%i==0)
        {
            check=1;
            break;
        }
    }
    if(check==0)
    {
        printf("%d is a Prime Number",no);
    }
    else
    {
        printf("%d is not a Prime Number",no);
    }

}

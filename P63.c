#include <stdio.h>
#include <conio.h>

int main()
{
    int i=1,n,choice,fact=1,sum;

    do
    {
    printf("\n'1'.Prime Number\n'2'.Factorial\n'3'.Perfect Number\n'4'.Exit\n");
    scanf("%d",&choice);
   
    
    switch(choice)

    {
     case 1:

            printf("\nEnter an integer:");
            scanf("%d",&n);

            for(i=1;i<=(n-1);i++)
            {
                if(n%i==0)
                {
                    sum=sum+i;
                }
            }
            if(sum==n)
            {
                printf("%d is perfect number :",n);
            }
            else
            printf("%d is not perfect number",n);
            break;

     case 2:
            printf("\nEnter an integer:");
            scanf("%d",&n);

            for(i=1;i<=n;i++)
            {
                fact=fact*i;
            }
            printf("\nThe factorial value is %d",fact);
            break;

    case 3:
            printf("\nEnter an integer:");
            scanf("%d",&n);

            for(i=1;i<=(n-1);i++)
            {
                if(n%i==0)
                {
                    sum=sum+i;
                }
            }
            if(sum==n)
            {
            printf("\nIt is perfect number");
            }
            else
            {
                printf("it is not perfect number");
            }
            break;

            case 4:
            printf("\nExited Succsessfully");
            break;
    
  
                  
    }
    }while(1);


    return 0;
}
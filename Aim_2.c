//Practical Assignment 5 20.01.2021
#include <stdio.h>
#include <conio.h>
#include <math.h>

    int main()

{
    int l,b,r,n,choice,sum,x,y,z,s;
    float AreaC,AreaR,AreaT;

    do

    {
        printf("\n'1'.Area of rectangle\n'2'.Area of circle\n'3'.Area of triangle\n'4'.Exit\n");
        scanf("%d",&choice);
   
    
        switch(choice)

        {
        case 1:
            printf("\nArea of rectangle");
            printf("\nEnter value of length and breadth :");
            scanf("%d %d",&l,&b);

            AreaR=l*b;
            printf("\nArea of rectangle of legth %d and breadth %d is %f : ",l,b,AreaR);
        
            break;

        case 2:
            printf("\nArea of circle");
            printf("\nEnter value of radius :");
            scanf("%d",&r);

            AreaC=3.14*r*r;
            printf("\nArea of circle of radius %d is %f : ",r,AreaC);
        
            break;

        case 3:
            printf("\nArea of triangle");
            printf("\nEnter value of sides a,b,c :");
            scanf("%d %d %d",&x,&y,&z);

            s=(x+y+z)/2;
            AreaT=pow(s*(s-x)*(s-y)*(s-z),0.5);
            printf("\nArea of triangle of side length %d , %d , %d is %f : ",x,y,z,AreaT);
            break;

        case 4:
            printf("\nThank you for using this Programme , You've exited Succsessfully");
            break;
        }
    }
    
    while(1);

    return 0;
//Perm Id - 20CE034
}





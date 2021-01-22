#include <stdio.h>
#include <string.h>

 int main()

{
    int i;
    char str[1000];
    float gtime;

    printf("Enter your paragraph:");
    gets(str);
    puts(str);
    
    float a=strlen(str);

    gtime=(a/300);

    if(a<15)
    {
    printf("Enter Valid Paragraph");
    }

    else
    {
    printf("%f min read",gtime);
    }

    return 0;
}



    

#include <stdio.h>
#include <string.h>

 int main()

{
    int i;
    char str[1000];
    float time;

    printf("Enter your paragraph:");
    gets(str);
    getchar();

    time=(strlen(str)/300);

    if(strlen(str)<15)
    {
    printf("Enter Valid Paragraph");
    }

    else
    {
    printf("%f min read",time);
    }

    return 0;
}



    
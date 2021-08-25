#include <stdio.h>

int main()
{
    printf("Enter a Number\n>>");
    int nume;//10 - 1010
    scanf("%d", &nume);
    for(int a=15;a>=0;a--)
    {
        //printf("Loop number %d", a);
        if((1<<a)&nume)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}

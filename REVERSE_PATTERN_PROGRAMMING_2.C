#include <stdio.h>
int main()
{
    int a, b, c, i;
    printf("ENTER A VALUE WHICH IS AN INTEGER\n");
    scanf("%d", &b);
    for (a = 1; a <= b; a++)
    {

        for (c = b; c >= a; c--)
        {

            printf("*");
        }
        

        printf("\n");
    }
}

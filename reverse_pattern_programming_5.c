#include <stdio.h>
int main()
{
    int a, b, c, i;
    printf("ENTER A VALUE WHICH IS AN INTEGER\n");
    scanf("%d", &b);
    for (a = 0; a < b; a++)
    {
        for ( i = b; i >(b-a); i--)
        {
           printf(" ");
        }
        
        
        for (c = b; c > a; c--)
        {

            printf("*");
        }
        

        printf("\n");
    }
}

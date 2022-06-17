#include <stdio.h>
int main()
{
    int a=1, b, c, i=1;
    printf("ENTER A VALUE WHICH IS AN INTEGER\n");
    scanf("%d", &b);
    while (a<=b)
    {
        int space=1;
        while (space<=b-a)
        {
            printf(" "
            );
            space++;
        }
        
        c=1;
        while (a>=c)
        {
            printf("%d",i);
            c++;
            
        }
        i++;
        
        printf("\n");
        a++;
    }
    

}
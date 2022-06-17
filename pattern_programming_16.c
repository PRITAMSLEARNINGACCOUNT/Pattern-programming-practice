#include <stdio.h>
int main()
{
    int row_max, row, coloumn,value;
    printf("ENTER A VALUE WHICH IS AN INTEGER=\n");
    scanf("%d", &row_max);
    printf("GIVE HOW MUCH STAR YOU WANT TO PRINT IN A LINE=\n");
    scanf("%d",&value);
    for (row = 1; row <= row_max; row++)
    {

        for (coloumn = 1; coloumn <=value; coloumn++)
        {

            printf("*");
        }

        printf("\n");
    }
}
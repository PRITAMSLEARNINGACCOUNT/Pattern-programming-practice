#include <stdio.h>
int main()
{
    int row_max, row, coloumn;
    printf("ENTER A VALUE WHICH IS AN INTEGER\n");
    scanf("%d", &row_max);

    for (row = 1; row <= row_max; row++)
    {

        for (coloumn = 1; coloumn <= 4; coloumn++)
        {

            printf("*");
        }

        printf("\n");
    }
}
#include <stdio.h>
int main()
{
    int row_max, row, coloumn, i = 1;
    printf("ENTER A VALUE WHICH IS AN INTEGER\n");
    scanf("%d", &row_max);
    for (row = 1; row <= row_max; row++)
    {

        for (coloumn = 1; coloumn <= row; coloumn++)
        {

            printf("%d", i);
        }
        i++;

        printf("\n");
    }
}
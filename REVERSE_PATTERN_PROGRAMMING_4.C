#include <stdio.h>
int main()
{
    int row_max, row, coloumn;
    printf("ENTER A VALUE WHICH IS AN INTEGER\n");
    scanf("%d", &row_max);
    int i = row_max;
    for (row = 0; row < row_max; row++)
    {
        for (int space = row_max; space > (row_max - row); space--)
        {
            printf(" ");
        }

        for (coloumn = row_max; coloumn > row; coloumn--)
        {

            printf("%d", i);
        }
        i--;

        printf("\n");
    }
}
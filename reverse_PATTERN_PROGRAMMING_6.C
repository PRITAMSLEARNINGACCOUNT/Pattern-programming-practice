#include <stdio.h>
int main()
{
    int row_max, row = 1, coloumn = 1;
    printf("ENTER A VALUE WHICH IS AN INTEGER\n");
    scanf("%d", &row_max);
    while (row<=row_max)
    {
        int i;
        i=row_max;
    //int row=1; //if inter loop exit and outer loop keep running then the interloop has to run again and again untill outer loop exit. 
        //there is no need to initialize the value which has been used in the condition of outer loop
        while (row<=i)
        {
            printf("*");
            i--;
        }
        
        printf("\n");
        row++;

    }
   
    

}
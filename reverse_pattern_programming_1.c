#include<stdio.h>
int main(){
    int row_max,row=0,coloumn,space;
    printf("GIVE MAXIMUM ROW LINE NUMBER=");
    scanf("%d",&row_max);
    while (row<row_max)
    {
        space=row_max;
        while (space>row_max-row)
        {
           printf(" ");
           space--;
        }
        coloumn=row_max;
        while (coloumn> row)
        {
            printf("*");
            coloumn--;
        }
        
        
        printf("\n");
        row++;
    }
    
}
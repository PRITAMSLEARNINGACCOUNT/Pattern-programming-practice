#include<stdio.h>
int main(){
    int row=1,row_max;
    printf("ENTER MAXIMUM ROW NUMBER= ");
    scanf("%d",&row_max);
    while (row<=row_max)
    {
        int coloumn=1;
        while (row>=coloumn)
        {
            printf("*");
            coloumn++;
        }
        
        printf("\n");
        row++;
    }
    
}
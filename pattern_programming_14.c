#include<stdio.h>
int main(){
    int row_max,row=1,coloumn,i=1;
    printf("ENTER MAXIMUM ROW NUMBER=");
    scanf("%d",&row_max);
    while (row<=row_max)
    {
        coloumn=1;
        while (row>=coloumn)
        {
        printf("%d ",i++);
        coloumn++;
        }
    
        printf("\n");
        row++;
    }
    
}
#include<stdio.h>
int main(){
    int row=1,row_max,coloumn=1,space=1;
    printf("GIVE MAXIMUM LINE NUMBER=");
    scanf("%d",&row_max);
    while (row<=row_max)
    {
     space=1;
     while (space<=row_max-row)
     {
         printf(" ");
         space++;
       }
        
        coloumn=1;
        while (coloumn<=row)
        {
            printf("*");
            coloumn++;
        }
        
       printf("\n");
       row++;
    }
    
}

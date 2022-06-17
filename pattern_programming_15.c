#include<stdio.h>
int main(){
    int row_max,row=1,coloumn,i;
    printf("ENTER MAXIMUM ROW NUMBER=");
    scanf("%d",&row_max);
    printf("GIVE HOW MUCH STAR YOU WANT TO PRINT IN ONE LINE=");
    scanf("%d",&i);
    //while (row<=row_max)
    //{
        //int space=1;
        //while (space<=row_max-row)
        //{
        //    printf(" ");
        //    space++;
        //}
        //THIS WILL NOT BE SUGGESTED IN THIS PROGRAMME BECAUSE THE EXICUTION OF THIS PROGRAMME IS NOT GONNA MAKE A GOOD PATTERN ATLEAST NOT THAT WHAT I WANT
        
       // coloumn=1;
        //while (row>=coloumn)
      //  {
       // printf("%d ",i++);
       // coloumn++;
       // }
    
       // printf("\n");
       // row++;
    //}
    while (row<=row_max)
    {
        coloumn=1;
        while (coloumn<=i)
        {
                printf("*");
                coloumn++;
        }
        row++;

        
        printf("\n");
    }
    
    
}
/*
Enter no of Rows:4
Enter no of Rows:4
*       *       *       *
*       *               *
*               *       *
*       *       *       *


*/


#include<stdio.h>

void Display(int iRow, int iCol)
{   
    int i = 0, j = 0;
    
    for(i = 1; i <= iRow ; i++)
    
    {
        for ( j = 1; j <= iCol; j++)
        
        {      
            if((i == iRow) || (i == 1 )|| (j == 1) || (j == iCol) || (i == j))
                {   
            
                    printf("*\t");

                }
            else
                {
                    printf(" \t");
                }

            
        }
        printf("\n");
           
    }

}



int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter no of Rows:");
    scanf("%d",&iValue1);

    printf("Enter no of Rows:");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);
    return 0;
}
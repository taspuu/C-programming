#include<stdio.h>
#include<conio.h>
int main()
{
 
 int matrix[3][3],raw=3,column=3,i,j;
 int sum=0;


//input
printf("Enter the eliments of the matrix : \n"); 
  for(i=0;i<raw;i++)
  {

   for(j=0;j<column;j++)
   {
    printf("matrix[%d][%d]: ",i,j);
     scanf("%d",&matrix[i][j]);
   }

  }

//output
    printf("\n\nThe matrix is: \n");
    
    for(i=0;i<raw;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d ",matrix[i][j]);
         if(i==j)
         {
        
           sum+=matrix[i][j];
         }
        }
        printf("\n");
    }

    printf("\n\nThe result is : %d",sum);
}    
   
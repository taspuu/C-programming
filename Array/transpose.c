#include<stdio.h>
#include<conio.h>
int main()
{
 
 int transpose[10][10], matrix[10][10],raw,column,i,j,k;

  printf("Enter the number of rows and columns of the first matrix: ");
  scanf("%d%d",&raw,&column);


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

//output of transpose matrix
    printf("\n\nThe matrix is: \n");
    
    for(i=0;i<column;i++)
    {
        for(j=0;j<raw;j++)
        {
         
            transpose[i][j]=matrix[j][i];
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
   

   //output of first matrix
    printf("\n\nThe matrix is: \n");
    
    for(i=0;i<raw;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
   
   getch();
}
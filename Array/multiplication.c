#include<stdio.h>
#include<conio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],raw1,raw2,column1,column2,i,j,k,sum=0;

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d%d",&raw1,&column1);
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d%d",&raw2,&column2);

    while(column1!=raw2)
    { 
     printf("Error! The number of columns of the first matrix must be equal to the number of rows of the second matrix.\n");
     
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d%d",&raw1,&column1);
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d%d",&raw2,&column2);

    }


//input of first matrix
    printf("Enter the elements of the first matrix: \n");
    
    for(i=0;i<raw1;i++)
    {
        for(j=0;j<column1;j++)
        {
             printf("first[%d][%d]: ",i,j);
            scanf("%d",&first[i][j]);
        }
    }

//input of second matrix
    printf("Enter the elements of the second matrix: \n");
    
    for(i=0;i<raw2;i++)
    {
        for(j=0;j<column2;j++)
        {
            printf("second[%d][%d]: ",i,j);
            scanf("%d",&second[i][j]);
        }
    }

//multiplying the two matrices
for(i=0;i<raw1;i++)
    {
        for(j=0;j<column2;j++)
        {
            result[i][j]=0;
            for(k=0;k<column1;k++)
            {
                sum=sum+first[i][k]*second[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }


 //output of first matrix
    printf("The first matrix is: \n");
    
    for(i=0;i<raw1;i++)
    {
        for(j=0;j<column1;j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }
 //output of second matrix
    printf("The second matrix is: \n");
    
    for(i=0;i<raw2;i++)
    {
        for(j=0;j<column2;j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
    }

//output of result matrix
    printf("The result matrix is: \n");
    
    for(i=0;i<raw1;i++)
    {
        for(j=0;j<column2;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

}
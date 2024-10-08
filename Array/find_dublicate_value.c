#include<stdio.h>
int main()
{
   int n;
   printf("Enter Range of input: ");
   scanf("%d",&n);
   
   
    int a[n],i;
    int count=0;
    printf("Enter the elements of array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        
        for(int j=i+1;j<n;j++)
        { 
           
          if(a[i]==a[j])
          {
            count++;
            break;
          }
         
        }
       
    }
      printf("dublicate : %d\n",count);
       return 0;
    }
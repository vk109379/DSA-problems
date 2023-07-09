#include <stdio.h>
int main()

{
  int a[30][30],b[30][30],c[30][30],i,j,k,sum,p,q,m,n;
 // printf("enter size of array:");
  //scanf("%d",&N);
  printf("Enter the no. of rows and column for Matrix A :\n");
  scanf("%d %d",&m,&n);
  printf("\nNow!,Enter the no. of rows and column for Matrix B :\n");
  scanf("%d %d",&p,&q);
 
  if(n!=p)
    {
    
        printf("\nMatrix can not be mutliplied");
    }
  else
   {
        printf("\nNow,Enter the elements for Matrix A :\n");
  for(i=0;i<m;i++)
  {
      for(j=0;j<n;j++)
      {
          scanf("%d",&a[i][j]);
      }
  }
  
  printf("\nNow,Enter the elements for Matrix B :\n");
  for(i=0;i<p;i++)
  {
      for(j=0;j<q;j++)
      {
          scanf("%d",&b[i][j]);
      }
  }
      for(i=0;i<p;i++)
       {
          for(j=0;j<n;j++)
            {
              sum=0;
              for(k=0;k<q;k++)
              {
                 sum=sum+(a[i][k]*b[k][j]);
                  
              }
              c[i][j]=sum; 
            }
        
       }
       printf("\nMultiplication of Matrix A and B is:\n");
       for(i=0;i<q;i++)
       {
          for(j=0;j<m;j++)
          {
              printf("%d\t",c[i][j]);
          }
          printf("\n");
       }
    }

    return 0;

}

#include<stdio.h>
int main()
{
      int x,y,b,i,j,m,n;
      printf("which operation you want to perform\n1.OR\n2.AND\n3.NOT\n");
      scanf("%d",&b);
      if(b==1)
      {
            for(x=0;x<=1;x++)
            {
                  for(y=0;y<=1;y++)
                  {               
                        printf("\n(OR)enter binary input:");
                  scanf("%d %d",&x,&y);
                if(x==0 && y==0)
                 printf("%d or %d= 0",x,y);
      
               if(x==0 && y==1 || x==1 && y==0)
                printf("%d or %d= 1",x,y);
              if(x==1 && y==1)
      
            printf("%d or %d= 1",x,y);
            }}
            
      }
      else if(b==2)
      {
             
            for(i=0;i<=1;i++)
            {
                  for(j=0;j<=1;j++)
                  {               
                  printf("\n(AND)enter binary input:");
                  scanf("%d %d",&i,&j);
                if(i==0 && j==0)
                 printf("%d and %d= 0",i,j);
                if(i==0 && j==1 || i==1 && j==0)
                 printf("%d and %d= 0",i,j);
                if(i==1 && j==1)
                 printf("%d and %d= 1",i,j);
            }}
      }
        else if(b==3)
      { 
            
       printf("\n(NOT)enter one binary input:");
            scanf("%d",&m);
            if(m==0)
                  printf("NOT of %d is= 1\n",m);
            else
                  printf("NOT of %d is= 0\n",m);
      }
      
      return 0;
}
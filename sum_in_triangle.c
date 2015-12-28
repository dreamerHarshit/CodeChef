#include<stdio.h>


int max(int a,int b)
{
 if(a>b)
  return a;
 else
 	return b;
}

int main()
{
  int t,r,i,k,tri[1001][1001],j,sum;
 
 scanf("%d",&t);
 
 for(i=0;i<t;i++)
 {
  scanf("%d",&r); 
  for(k=0;k<r;k++)
  {
   for(j=0;j<=k;j++)
   {
    scanf("%d",&tri[k][j]);
   }  
  } 
  for(k=1;k<r;k++)
   {
     for(j=0;j<=k;j++)
     { 
      if(j==0)
      {
       tri[k][j]=tri[k][j]+tri[k-1][j];
       //printf("%d\n",tri[k][j]);
      }
      else if(j==k)
      {
       tri[k][j]=tri[k][j]+tri[k-1][j-1];
       //printf("%d\n",tri[k][j]);
      }  
      else
      {
       tri[k][j]=tri[k][j]+max(tri[k-1][j],tri[k-1][j-1]);
       //printf("%d\n",tri[k][j]);
      }
     }
   }
   sum=tri[r-1][0];
   for(j=1;j<r;j++)
   {
    if(tri[r-1][j]>sum)
         sum=tri[r-1][j];
   }
   printf("%d\n", sum);
  }  
 
 return 0;
}

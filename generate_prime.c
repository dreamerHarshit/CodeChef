#include<stdio.h>
#include<cmath>

int main()
{
 int t,n,m,i,j;
 
scanf("%d",&t);

while(t>0)
{
 scanf("%d %d",&m,&n);

 for(i=m;i<=n;i++)
 {
  for(j=2;j<=sqrt(i);j++)
  {
  if(i%j==0)
   {
    break;
   }
  }
 if(j==i)
 {
  printf("%d",i);
 } 
}
 t--; 
}
return 0;
}

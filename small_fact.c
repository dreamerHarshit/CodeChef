#include<Stdio.h>


int main()
{
 int A[200],i,n,m,temp; 
 scanf("%d",&n);
 while(n>0)
  {
    A[i]=n%10;
    n=n/10;
  }
for(i=0;i<n;i++)
{
 printf("%d",A[i]);
}
return 0;
}

 
 

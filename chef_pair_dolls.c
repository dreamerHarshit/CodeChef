#include<stdio.h>
int main()
{
 int n,a[100000],t,i,count=0;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
   if(a[i]%2!=0)
   {
    if(a[i]!=1)
    	while(a[i]>=2)
    	{
    	 a[i]=a[i]-1;
    	}	
    	count=count+1;
   }
  }
  printf("%d\n",count);
  }
 return 0;
}

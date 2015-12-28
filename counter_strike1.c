#include<stdio.h>
int main()
{
 int i,sum,j,n,t;
 int a[501];
 scanf("%d",&t);
 while(t--)
	{
		sum=0;
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	  scanf("%d",&a[i]);
	 }
	 for(i=0;i<n;i++)
	 {
	  sum=sum+a[i];
	 }
	 if(sum%2==0)
	  printf("YES\n");
	 else
	 	printf("NO\n");
	}
return 0;
}

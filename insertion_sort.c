#include<stdio.h>

int main()
{
int i,j,key,n,m;
int v[100];
printf("Enter size of array\n");
scanf("%d",&n);
printf("enter array\n");
	for(i=1;i<=n;i++)
	{
 	scanf("%d",&v[i]);
	}	
	//i=0;

	for(j=2;j<=n;j++)
	{
	  key=v[j];
	 	i=j-1;
 	while(i>0 && v[i]>key)
 	{
 	 v[i+1]=v[i];
 	  i--;
 	 v[i+1]=key;
 	}
	}
	for(i=1;i<=n;i++)
	{
	 printf("%d\t",v[i]);
	}
return 0;
}

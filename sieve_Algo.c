#include<stdio.h>
#include<math.h>

int main()
{

int t,m,n,i,j;
int a[100],b[100]=0;

scanf("%d",&t);

while(t>0)
{
	scanf("%d%d",m,n);

	for (i =0; i <=n; i++)
	{
		for (j = 2; j<=sqrt(n); j++)
		{
			if (i%j==0)
			{
				break;
			}
			if(i==j)
			{
				
			}
		}
	
	}
}

}
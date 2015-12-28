#include<stdio.h>

int main()
{
	long long int i,t,n,k,p,p1;
	
	scanf("%lld",&t);
	
	while(t--)
	{
	 p=0;
		p1=0;
	 scanf("%lld%lld",&n,&k);
	 
		for(i=k;i>0;i--)
		{
			p=n%i;
			if(p>p1)
			{
				p1=p;
			}
		}
	 printf("%lld\n",p1);
	}
return 0;
}

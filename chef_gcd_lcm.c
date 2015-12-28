#include<stdio.h>

int GCD(int a,int b)
{
 if(b==0)
 	return a;
 else
 	return GCD(b,a%b);	
}

int LCM(int a,int b)
{
 return b*a/GCD(a,b);
}

int main()
{
	int a,b,t;
	
	scanf("%d",&t);
	
	while(t--)
	{
	 scanf("%d%d",&a,&b);
	 printf("%d %d\n",GCD(a,b),LCM(a,b));
	}
	
	return 0;
}

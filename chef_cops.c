#include<stdio.h>
//#include<math.h>

int main()
{
	int t,x,y,m,a[110],q,p,mm,i,count=0,j; 
	scanf("%d",&t);
	while(t--)
	{
		//p=0;
		//q=0;
  int b[110]={0};
		scanf("%d%d%d",&m,&x,&y);
		
		for(i=0;i<m;i++)
		{
			scanf("%d",&a[i]);
		}
		mm=x*y;
		
		for(i=0;i<m;i++)
		{
			p=a[i]-1-mm;
			q=a[i]-1+mm;
			
			if(p<0)
			{
				p=0;
			}	
			if(q>100)
			{	
				q=100;
			}
			for(j=p;j<=q;j++)
			{
					b[j]=1;
			}				
		}
		count=0;
		for(i=0;i<100;i++)
		{
			if(b[i]==0)
			{
			 count++;
			}
		}
		printf("%d\n",count);
	}	
return 0; 
}

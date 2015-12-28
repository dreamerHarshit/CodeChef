#include <stdio.h>

int main()
{
	int t,i,count,x,m;
	char s1[100],s2[100];

	scanf("%d",&t);

	while(t>0)
	{
		scanf("%s",s1);
		//printf("%s",s2);
		scanf("%s",s2);
        //printf("%s",s2);
        count=0;x=0;m=0;i=0;
		while(s1[i]!='\0' && s2[i]!='\0')
		{   
			//printf("hello");
			if(s1[i]=='?' || s2[i] =='?')
			{
 				count=count+1;
			}	
           else if(s1[i]!='?' && s2[i]!='?' && s1[i]!=s2[i])
           {
           	 x=x+1;
           }
           i++;
       }
     m=count+x;
    printf("%d %d\n",x,m);
    t--;
   } 
 
return 0;
}
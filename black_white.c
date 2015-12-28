#include<bits/stdc++.h>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
int t;
scanf("%d",&t);
while(t--)
{
 int i=0,coun=0,count=0;
 string s;
 cin>>s;
 while(s[i]!='W')
 	{
 	  coun++;
  	i++;
 	}
 for(i=coun+1;i<s.size();i++)
  	count++;
 if(coun==count)
		printf("Chef\n");
 else if(coun==0&&count==0)	  
	 	printf("Chef\n");
 else
 	  printf("Aleksa\n");	 	
}
return 0;
}

#include<bits/stdc++.h>

//#define S(x) scanf("%d",&x);
///#define P(x) printf("%d\n",x);

using namespace std;

int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
  {
    char s1[10001];
    char s2[10001];
    int w[10001];
    int i,count=0;
    int n,max=0;
    scanf("%d",&n);
    scanf("%s",s1);
    scanf("%s",s2);
    for(i=0;i<=n;i++)
    {
     scanf("%d",&w[i]);
    }  
    for(i=0;i<n;i++)
    {
     if(s1[i]==s2[i])
     {
     		count++;
     }	
    }
    //cout<<count<<"\n";
    if(count==n)
    {
     printf("%d\n",w[count]);
    }
    
    else
    {
     for(i=0;i<=count;i++)
      { 
       if(w[i]>max)
    	  {
    	   max=w[i];
    	  }
    	}
    	printf("%d\n",max);  
    }	
   } 	 
 return 0;
} 

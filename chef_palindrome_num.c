#include<stdio.h>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
int t,l,r,i,tmp,rem,rev;
scanf("%d",&t);
while(t--)
{
 int count=0;
 scanf("%d%d",&l,&r);
 for(i=l;i<=r;i++)
 {
  rem=0,rev=0;
  tmp=i;
  while(tmp!=0)
  {
   rem=tmp%10;
   rev=rev*10+rem;
   tmp=tmp/10;
  }
 
  if(rev==i)
  {
    // printf("i=%d\n",i);
     //printf("rev=%d\n",rev);
  	 count=count+i;
  } 
 }
 printf("%d\n",count);
}
return 0;
}

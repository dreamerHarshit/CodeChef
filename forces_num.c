#include<bits/stdc++.h>

using namespace std;

int main()
{
 int t,n,x=1,i;
 scanf("%d%d",&n,&t);
 //cout<<n;
 for(i=0;i<n;i++)
 {
  x=x*10;
 }
 cout<<x;
 /*for(i=x;i<x*10;i++)
 {
  if(i%t==0)
    printf("%d\n",i);
  else
  	printf("-1\n");
 }*/

return 0;
}

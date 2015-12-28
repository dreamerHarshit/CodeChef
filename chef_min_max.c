#include<bits/stdc++.h>

using namespace std;
int main()
{
 long long int a[100000],t;
long long int n,i,min,ans;
 scanf("%lld",&t);
while(t--)
{
	ans=0;
 scanf("%lld",&n);
 for(i=0;i<n;i++)
 {
  scanf("%lld",&a[i]);
 }

/*for(i=0;i<n;i++)
 {
  printf("%d\n",a[i]);
 }*/

 min=a[0];
	for(i=1;i<n;i++)
	{ /*cout<<"yes\n";
	  cout<<a[i]<<"\t";*/
	 if(min>a[i])
	 {
	  //cout<<"yes\n";
	  min=a[i];
	 }
	}
	//printf("min,n,%d,%d\n",min,n);
	ans=min*(n-1);
	printf("%lld\n",ans);
}
return 0;
}

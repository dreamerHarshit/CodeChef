#include<stdio.h>
#include<math.h>
#include<algorithm>

using namespace std;
 
long long int solve(long long int i,long long int  j);
long long int A[100000],R[100000]={0};
long long int i,j,N,C,M,T,l,r,p;
long long int DP[1000][1000]={0};
bool flag[1000][1000]={false};
int main()
{
	long long int a;
 scanf("%lld",&T);
 while(T--){
 
 scanf("%lld%lld%lld",&N,&C,&M);
  for(i=1;i<=100000;i++)
 {
   A[i]=0;
 }
 for(j=1;j<=100000;j++)
 {
 	R[j]=-1;
 }
 for(i=1;i<=N;i++)
 {
  scanf("%lld",&A[i]);
 }
 
 for(i=0;i<M;i++)
 {
  scanf("%lld%lld%lld",&l,&r,&p);
  for(j=l;j<=r;j++)
  {
  	if(R[j]>p || R[j]==-1)
  	{
  			R[j]=p;
  	} 
  }
 }
 for(i=0;i<1000;i++)
 {
 	for(j=0;j<1000;j++)
 	{
  	DP[i][j]=0;
  	flag[i][j]=false;
  }
 }
 printf("%lld\n",solve(N,C));
 }
return 0;
}

long long int solve(long long int i,long long int j)
{
	long long int ret=0;
	if(i<=0)
	{
	 return DP[i][j]=0;	
	}
	if(flag[i][j]==true)
		{
			return 	DP[i][j];
		}
	ret=A[i]+solve(i-1,j);
	if(j>=R[i])
	{
			ret=max(ret,solve(i-1,j-R[i]));
	}
	
	flag[i][j]=true;
	return DP[i][j]=ret;				
}


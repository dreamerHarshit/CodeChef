#include<bits/stdc++.h>
//#include<math.h>
#include<algorithm>
int main()
{
  int i,t,n,j;//p,q;
  int count=0;
  int a[501][501];
  int p[260000],q[260000];
  scanf("%d",&t);
  while(t--)
  {
      //x=2;
      count=0;
      scanf("%d",&n);
      
      for(i=1;i<=n;i++)
      {
          for(j=1;j<=n;j++)
          {
              scanf("%d",&a[i][j]);
              p[a[i][j]]=i;
              q[a[i][j]]=j;
          }
      }
       // printf("%d,%d\n",p,q);
     for(i=1;i<n*n;i++)
     {
      count=count+abs(p[i]-p[i+1])+abs(q[i]-q[i+1]);
      //printf("count=%d\n",count);
     }
     printf("%d\n",count);
      } 
  return 0;
}

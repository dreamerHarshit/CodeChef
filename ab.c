#include<stdio.h>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
int i,j,min,n,tmp1,tmp2;
int a[50][50],w[100],edge1[100],edge2[100];
int k=0;
scanf("%d",&n);

for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
  scanf("%d",&a[i][j]);
  if(a[i][j]!=0)
  {
  w[k]=a[i][j];
  edge1[k]=i;
  edge2[k]=j;
  k++;
  }
 } 
}  

for(i=0;i<n*n-1;i++)
{
 min=i;
 for(j=i+1;j<n*n;j++)
 {
  if(w[j]<w[min])
  {
   min=j;
  }
  swap(w[i],w[min]);
  swap(edge1[i],edge1[min]);
  swap(edge2[i],edge2[min]); 
}
}
int a[100];
///////////////checking sorting///////////////
/*for(i=0;i<n*n;i++)
{
 printf("w=%d\n",w[i]);
 printf("edge1=%d\n",edge1[i]);
 printf("edge2=%d\n",edge2[i]);
}*/
for(i=1;i<n;i++)
{
 if(edge1[i-1]!=edge1[1]&&edge2[i-1]!=edge2[1])
 {
  a[]
 }
}
return 0;
}

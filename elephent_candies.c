#include<bits/stdc++.h>

using namespace std;

int main()
{
 int i,t;
 
 scanf("%d",&t);
 while(t--)
 {
  int n,c,a[101],flag=0;
  scanf("%d%d",&n,&c);
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  
  for(i=0;i<n;i++)
  {
   if(a[i]<=c)
   {
    c=c-a[i];
    flag=1;
   }
   
   else
    {
     flag=0;
     break;
    }
  }
  if( flag==1)
    cout<<"Yes"<<"\n";
  else
    cout<<"No"<<"\n";  
 
 }
 return 0;
}

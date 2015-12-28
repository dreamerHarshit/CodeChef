#include<bits/stdc++.h>


using namespace std;

int ifPrime(int n)
{
 int i;
 int flag=0;
 if(n==1)
 	 return 0;
 else
  { 	
    for(i=2;i<sqrt(n);i++)
    {
      if(n%i==0)
       {
   				flag=0;
   				break;
  		 }
     else
  		 flag=1; 	
 }
 return flag;	 
} 
}

int  ifpalin(int n)
{
 //int flag=0;
 int m=0,x=n;
 while(x>0)
 {
  m=m*10+x%10;
  x=x/10;
 }
 //cout<<"m="<<m;
 if(m==n)
   return 1;
 else 
   return 0; 	
}


int main()
{
 int i,n;
 scanf("%d",&n);
 for(i=n;;i++)
 {
   //cout<<ifpalin(i)<<"\n";
  if(ifpalin(i))
  { 
   // cout<<ifPrime(n)<<"\n";
      if(ifPrime(i))
      {
       printf("%d\n",i);
       break;
      }
  } 
 } 
return 0;
}

#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
 int n,m,x;
 cin>>n;
 x=n;
 while(x>0)
 {
  m=m*10+x%10;
  x=x/10;
 }
 if(m==n)
   cout<<"true";
 else
    cout<<"false";  
return 0; 
}

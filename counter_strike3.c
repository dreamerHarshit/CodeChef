#include<stdio.h>
#include<bits/stdc++.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
int i,t;
char s[100000] ;
set<char> p;
scanf("%d",&t);
while(t--)
{
 //p.clear();
 scanf("%s",s);;
  for(i=0;i<strlen(s);i++)
 {
  p.insert(s[i]);
 }
if(p.size()%2!=0)
 printf("Counter Terrorist\n");
else
	printf("Terrorist\n"); 
	}
return 0;
}


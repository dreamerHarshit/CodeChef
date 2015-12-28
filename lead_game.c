#include<stdio.h>

int main()
{
 int N,i,s=0,max=0,w=0;
 int p1[10001],p2[10001],l[10001],ml[10001];
 
 scanf("%d",&N);
 
 for(i=0;i<N;i++)
 {
  scanf("%d",&p1[i]);
  scanf("%d",&p2[i]);
 }
 
 for(i=0;i<N;i++)
 {
   s=s+(p1[i]-p2[i]);
   l[i]=s;
 }
 
 for(i=0;i<N;i++)
 {
 	ml[i]=abs(l[i]);
 }
 
 for(i=0;i<N;i++)
 {
			if(max<ml[i])
   {
   		max=ml[i];
     if(l[i]>0)
     		w=1 ;
     else 
     	 w=2;
   }
 }

 printf("%d %d",w,max);
 
 return 0;
 } 


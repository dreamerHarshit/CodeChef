#include<stdio.h>

 int main()
 {
  int t,n;

  scanf("%d",&t);
  
  while(t>0)
  {
   scanf("%d",&n);
   if(n%2==0)
   {
    printf("ALICE\n");
   }
   else
   {
   printf("BOB\n");
   }
  t--;
  }
  return 0;
 }

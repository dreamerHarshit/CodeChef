#include<stdio.h>
#include<string.h>
int main()
{
 char str[6][20];
 long long int t;
 int i;
 scanf("%lld",&t);
  
 while(t>0)
 {
  
  for(i=0;i<6;i++)
  {
  scanf("%s",str[i]);
  }
 // printf("%s, %s, %s, %s, %s, %s", str[0], str[1], str[2], str[3], str[4], str[5]);
 if(strcmp(str[0],str[2])==0 && strcmp(str[2],str[4])==0)
 {
   printf("YES\n");
 }
 
 else if(strcmp(str[0],str[2])==0 && strcmp(str[2],str[5])==0)
 {
  printf("YES\n");
 }
 
 else if(strcmp(str[0],str[3])==0 && strcmp(str[3],str[4])==0)
 {
  printf("YES\n");
 }
 
 else if(strcmp(str[0],str[3])==0 && strcmp(str[3],str[5])==0)
 {
  printf("YES\n");
 }
 
 else if(strcmp(str[1],str[2])==0 && strcmp(str[2],str[4])==0)
 {
  printf("YES\n");
 }
 
 else if(strcmp(str[1],str[2])==0 && strcmp(str[2],str[5])==0)
 {
  printf("YES\n");
 }
 
 else if(strcmp(str[1],str[3])==0 && strcmp(str[3],str[4])==0)
 {
  printf("YES\n");
 }
 
 else if(strcmp(str[1],str[3])==0 && strcmp(str[3],str[5])==0)
 {
  printf("YES\n");
 }
 else
   printf("NO\n");

 t--;
 }
 
 return 0;
}

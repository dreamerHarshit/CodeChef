#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
int t,i,b,r,l;
float max,min;
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&b,&l);
max=sqrt(b*b+l*l);
min=sqrt(l*l-b*b);
printf("%f %f",min,max);
printf("\n");
}
return 0;
}

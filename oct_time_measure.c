#include"bits/stdc++.h"

using namespace std;

int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 { 
  double a;
  scanf("%lf",&a);
  int h,m;
  double hour_angle;
  double minute_angle;
  double angle;
  for(h=0;h<=11;h++)
  {
   for(m=0;m<=59;m++)
   {
     hour_angle = 0.5 * (h*60 + m);
     minute_angle = 6*m;
     angle = abs(hour_angle - minute_angle);  
     angle = min(360-angle,angle);
     if(abs(angle-a)<0.0833)
     {
   		 if(h<10&&m<10)
 				   printf("0%d:0%d\n",h,m);
 			 else if(h<10&&m>=10)  
 					printf("0%d:%d\n",h,m);
 			 else if(m<10&&h>=10)
 				  printf("%d:0%d\n",h,m);
 			 else
 				   printf("%d:%d\n",h,m);  	
   	}	 
   }	
  }
 }
 return 0;
}

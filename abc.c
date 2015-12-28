#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int l,b,val,temp;
		scanf("%d %d",&l,&b);
		temp=__gcd(l,b);
		val=temp*temp;
		val=(l*b)/val;
		printf("%d\n",val);
	}
	return 0;
}

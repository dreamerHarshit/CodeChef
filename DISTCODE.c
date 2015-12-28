#include<bits/stdc++.h>

#define  s(t) scanf("%d",&t)
#define  S(x,y) scanf("%d%d",&x,&y)
#define  q(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define  p(t) printf("%d\n",t)

using namespace std;

int main()
{
int t,i;
s(t);
while(t--)
{
 string r;
 set<string> st;
 cin>>r;
 for(i=0;i<r.size()-1;i++)
 {
  st.insert(r.substr(i,2));
 }
 cout<<st.size()<<endl;
 st.clear();
}
return 0;
}

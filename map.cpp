#include<bits/stdc++.h>
using namespace std;
int main()
{
 
int n,i;
string str;
map<string,int>  m1;
//memset(m1,-1,1000);
cin>>n;
for(i=0;i<n;i++)
{
    cin>>str;
    m1[str]++;
}
map<string,int>::iterator ii=m1.begin();
for(;ii!=m1.end();ii++)
    cout<<ii->first<<" "<<ii->second<<endl;
return 0;
}


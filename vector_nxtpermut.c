#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#define all(v) v.begin(), v.end()

using namespace std;

int main()
{
 vector<int> v;
 int count=0,i;
 for(i=0;i<10;i++)
 {
 	v.push_back(i);
 }
 
 do
 {
  count++;
 }while(next_permutation(all(v)));
 
 printf("%d\n",count);
}

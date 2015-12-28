 #include<stdio.h>
 #include<stdlib.h>
 //#include<string>
//s#include<stack>
 #include<vector>

using namespace std;

int main()
{
	vector<int> v;

	for(int i=0;i<11;i++)
	{
		v.push_back(i);
	}


	printf("size:%ld\n",v.size());
	for(int i=0;i<v.size();i++)
	{
		printf("vector v:%d\n",v[i]);
	}

	/*for(int i=12;i<21;i++)
	{
		v.push_front(i);
	}	*/
	printf("\n");

	//v.resize(20);
	//printf("size:%ld\n",v.size());
	/*for(int i=50;i<61;i++)
	{
		v.push_back(i);
	}	*/

	//printf("size:%ld\n",v.size());
	//v.clear();

	if(v.empty())
	{
	 printf("vector is empty\n");
	}
	else
	 printf("vector is not empty\n");

	 vector<int> v2=v;
	 vector<int> v3(v);

	 for(int i=0;i<v2.size();i++)
	{
		printf("\nvector v2:%d\t",v2[i]);
	}

	 for(int i=0;i<v3.size();i++)
	{
		printf("\nvector v3:%d\t",v3[i]);
	}

  

	return 0;
}


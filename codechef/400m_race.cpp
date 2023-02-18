//https://www.codechef.com/problems/RACE400M
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	int i;
	for(i=0;i<t;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		//float a,b,c;
		//a=400/x;
		//b=400/y;
		//c=400/z;
		vector<int> list;
		list.push_back(x);
		list.push_back(y);
		list.push_back(z);
		sort(list.begin(),list.end());
		if(list[0]==x)
		{
			cout<<"ALICE"<<"\n";
		}
		else if(list[0]==y)
		{
			cout<<"BOB"<<"\n";
		}
		else
		{
			cout<<"CHARLIE"<<"\n";
		}

	}
	return 0;
}

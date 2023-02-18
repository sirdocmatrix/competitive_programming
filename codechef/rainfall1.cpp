//#include<bits/stdc++.h>
#include<iostream>
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
		int x;
		cin>>x;
		if(x<3)
		{
			cout<<"LIGHT"<<"\n";
		}
		else if((x>=3)&&(x<7))
		{
			cout<<"MODERATE"<<"\n";
		}
		else
		{
			cout<<"HEAVY"<<"\n";
		}
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int n;
int a[100];
vector<string>v;
void xuat(int x)
{
	string s;
	s+="(";
	for(int i=1;i<=x-1;i++)
	{
		s=s+to_string(a[i])+" ";
	}
	s=s+to_string(a[x])+")";
	v.push_back(s);
}
void Try(int i,int k,int sum)
{
	for(int j=k;j>=1;j--)
	{
		if(sum<=n)
		{
		a[i]=j;
		sum+=j;
		if(sum==n)
		{
			xuat(i);
		}
		else Try(i+1,j,sum);
		sum-=j;	
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;	
		v.clear();
		Try(1,n,0);
		cout<<v.size()<<endl;
		for(auto x:v)
		{
			cout<<x<<" ";
		}
		cout<<endl;
	}
}

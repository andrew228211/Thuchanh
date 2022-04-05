#include<bits/stdc++.h>
using namespace std;
int f[1000005];
int main()
{
	int a,b;
	cin>>a>>b;
	memset(f,0,sizeof(f));
	int cnt=0;
	for(int i=2;i<=b;i++)
	{
		for(int j=i;j<=b;j=j+i)
		{
			f[j]+=i;
		}
	}
	for(int i=a;i<=b;i++)
	{
		if(f[i]-i>i)
		{
			cnt++;
		}
	}
	cout<<cnt;
}

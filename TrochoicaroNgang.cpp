#include<bits/stdc++.h>
using namespace std;
int a[100];
int n;
int chuaxet[100];
char c,d;
vector<string>x;
int kt()
{
	int cnt1=0,cnt2=0;
	int flag1=0,flag2=0;
	if(a[n]==0)
	{
		a[n+1]=1;
	}
	else a[n+1]=0;
	for(int i=1;i<=n+1;i++)
	{
		if(a[i]==0)
		{
			flag2=max(cnt2,flag2);
			cnt2=0;
			cnt1++;
		}
		else{
			flag1=max(cnt1,flag1);
			cnt1=0;
			cnt2++;
		}
	}
	if(flag1>flag2&&flag1>=5) return 1;
	return 0;
}
void xuat()
{
	if(kt()==1)
	{
		string s;
		for(int i=1;i<=n;i++)
		{
			if(a[i]==0)
			{
				s+=c;
			}
			else s+=d;
		}
		x.push_back(s);
	}
}
void Try(int i)
{
	for(int j=1;j>=0;j--)
	{
		a[i]=j;
		if(i==n) xuat();
		else Try(i+1);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>c;
		if(c=='X') d='O';
		else d='X';
		x.clear();
		Try(1);
		sort(x.begin(),x.end());
		for(auto i:x)
		{
			cout<<i<<endl;
		}
	}
}

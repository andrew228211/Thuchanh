#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+5];
//	int Max=0,Min=1e9;
//	for(int j=1;j<=n;j++)
//	{
//		for(int i=1;i<=n-j+1;i++)
//		{
//			for(int k=i;k<=i+j-1;k++)
//			{
//				Min=min(a[k],Min)*j;
//			}
//			Max=max(Min,Max);
//		}
//	}
	vector<int>l,r;
	stack<int>b,c;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		while(!b.empty()&&a[i]<=a[b.top()])
		{
			b.pop();
		}
		if(b.empty()) l[i]=0;
		else l[i]=b.top()+1;
		b.push(i);
	}
	for(int i=n-1;i>=0;i--)
	{
		while(!c.empty()&&a[i]<=a[c.top()])
		{
			c.pop();
			if(c.empty())
			{
				r[i]=n-1;
			}
			else r[i]=c.top()-1;
		}
	}
	int s=0;
	for(int i=0;i<n;i++)
	{
		s=max(s,a[i]*(r[i]-l[i]+1));
	}
	cout<<s;
	
}

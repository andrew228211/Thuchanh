#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[35];
int cnt=0;
int Min=1e9;
void Try(int i,long long sum)
{
	for(int j=i;j<=n;j++)
	{
		cnt++;
		sum+=a[j];
		if(sum==k)
		{
			Min=min(cnt,Min);
		}
		else if(sum<k) Try(j+1,sum);
		sum-=a[j];
		cnt--;
	}
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	Try(1,0);
	if(Min!=1e9)
	{
		cout<<Min;
	}
	else cout<<-1;
}

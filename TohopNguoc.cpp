#include<bits/stdc++.h>
using namespace std;
int a[100];
int n,k;
int chuaxet[100];
void xuat()
{
	for(int i=1;i<=k;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void Try(int i)
{
	for(int j=n-k+i;j>=a[i-1]+1;j--)
	{
		if(chuaxet[j]==0)
		{
			chuaxet[j]=1;
			a[i]=j;
			if(i==k) xuat();
			else Try(i+1);
			chuaxet[j]=0;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	cin>>n>>k;
	memset(chuaxet,0,sizeof(chuaxet));
	a[0]=0;
	Try(1);
	}
}

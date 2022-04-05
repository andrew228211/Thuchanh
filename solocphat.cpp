#include<bits/stdc++.h>
using namespace std;
int n;
int a[13];
void xuat()
{
	for(int i=1;i<=n;i++)
	{
		cout<<a[i];
	}
	cout<<" ";
}
void Try(int i)
{
	for(int j=0;j<=1;j++)
	{
		if(j==0)
		{
			a[i]=6;
		}
		else a[i]=8;
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
		cin>>n;
		cout<<pow(2,n)<<endl;
		Try(1);
		cout<<endl;
	}
}

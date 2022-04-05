#include<bits/stdc++.h>
using namespace std;
int n;
char a[13];
int x;
void xuat()
{
	for(int i=1;i<=n;i++)
	{
		cout<<a[i];
	}
	x++;
	if(x<=pow(2,n))
	{
		cout<<",";
	}
}
void Try(int i)
{
	for(int j=0;j<=1;j++)
	{
		if(j==0)
		{
			a[i]='A';
		}
		else a[i]='B';
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
		x=1;
		Try(1);
		cout<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
char a[100];
int x[100];
int n;
int chuaxet[100];
void xuat()
{
	for(int i=1;i<=n;i++)
	{
		cout<<a[i];
	}
	for(int i=1;i<=n;i++)
	{
		cout<<x[i];
	}
	cout<<endl;
}
void Try1(int i)
{
	for(int j=1;j<=n;j++)
	{
		x[i]=j;
		if(i==n)
		{
			xuat();
		}
		else Try1(i+1);
	}
}
void Try(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(chuaxet[j]==0)
		{
		chuaxet[j]=1;
		a[i]=j+64;
		if(i==n)
		{
			Try1(1);
		}
		else Try(i+1);	
		chuaxet[j]=0;
		}
	}
}
int main()
{
	cin>>n;
	memset(chuaxet,0,sizeof(chuaxet));
	Try(1);
}

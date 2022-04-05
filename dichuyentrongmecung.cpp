#include<bits/stdc++.h>
using namespace std;
int n;
int a[100][100];
vector<string>v;
int check[11][11];
string s;
void Try(int x,int y)
{
	if(x==n&&y==n)
	{
		v.push_back(s);
	}
	check[x][y]=1;
	if(x<n&&a[x+1][y]==1&&check[x+1][y]==0)
	{
		s+='D';
		Try(x+1,y);
		s.pop_back();
	}
	if(y>0&&a[x][y-1]==1&&check[x][y-1]==0)
	{
		s+='L';
		Try(x,y-1);
		s.pop_back();
	}
	if(y<n&&a[x][y+1]==1&&check[x][y+1]==0)
	{
		s+='R';
		Try(x,y+1);
		s.pop_back();
	}
	if(y>0&&a[x-1][y]&&check[x-1][y]==0)
	{
		s+='U';
		Try(x-1,y);
		s.pop_back();
	}
	check[x][y]=0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;	
		v.clear();
		s.clear();
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>a[i][j];
			}
		}
		memset(check,0,sizeof(check));
		if(a[1][1]==0)
		{
			cout<<-1<<endl;
			continue;
		}
		Try(1,1);
		if(v.empty())
		{
			cout<<-1<<endl;
			continue;
		}
		cout<<v.size()<<" ";
		for(auto x:v)
		{
			cout<<x<<" ";
		}
		cout<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
Note:  5 1 6 7 2
	   1 
*/
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+5];
		int Max=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			Max=max(a[i],Max);
		}
		int res=0,cnt=0;
		for(int i=1;i<=n;i++)
		{
			if(a[i]==Max)
			{
				cnt++;
			}
			else{
				res=max(res,cnt);
				cnt=0;
			}
		}
		cout<<max(res,cnt)<<endl;
	}
}

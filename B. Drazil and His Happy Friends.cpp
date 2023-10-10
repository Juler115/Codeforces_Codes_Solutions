// Problem: B. Drazil and His Happy Friends
// Contest: Codeforces - Codeforces Round 292 (Div. 2)
// URL: https://codeforces.com/contest/515/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	int tristen=n,tristec=m;
	vector<int> ninos(n),ninas(m);
	int b;
	cin>>b;
	for(int i=0;i<b;i++)
	{
		int x=0;
		cin>>x;
		ninos[x]=1;
		tristen--;
	}
	int g;
	cin>>g;
	for(int i=0;i<g;i++)
	{
		int x=0;
		cin>>x;
		ninas[x]=1;
		tristec--;
	}
	int i=0,j=0;
	int total=(min(n,m)+1)*(max(n,m)+1);
	while(total--)
	{
		i%=n;
		j%=m;
		if(ninos[i]==0 && ninas[j]==1)
		{
			tristen--;
			ninos[i]=1;
		}
		else if(ninos[i]==1 && ninas[j]==0)
		{
			tristec--;
			ninas[j]=1;
		}
		i++;
		j++;
	}
	//cout<<tristen<<" "<<tristec;
	if(tristen<=0 && tristec<=0)cout<<"Yes";
	else cout<<"No";
	
	return 0;
}
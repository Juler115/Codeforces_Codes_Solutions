// Problem: B. Gifts Fixing
// Contest: Codeforces - Codeforces Round #661 (Div. 3)
// URL: https://codeforces.com/contest/1399/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	long long t=0;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector <long long> cara,nara;
		long long minc=1e10,minn=1e10;
		long long cambios=0;
		for(long long i=0;i<n;++i)
		{
			long long aux;
			cin>>aux;
			cara.pb(aux);
		}
		for(long long i=0;i<n;++i)
		{
			long long aux;
			cin>>aux;
			nara.pb(aux);
		}
		for(long long i=0;i<n;i++)
		{
			if(cara[i]<minc)minc=cara[i];
			if(nara[i]<minn)minn=nara[i];
				
		}
		for(long long i=0;i<n;i++)
		{
			int cambi=min(cara[i]-minc,nara[i]-minn);
			cara[i]-=cambi;
			nara[i]-=cambi;
			cambios+=cambi;
			cambios+=cara[i]-minc;
			cambios+=nara[i]-minn;
		}
		cout<<cambios<<"\n";
	}
	
	return 0;
}

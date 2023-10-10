// Problem: C2. Guessing the Greatest (hard version)
// Contest: Codeforces - Codeforces Round 703 (Div. 2)
// URL: https://codeforces.com/contest/1486/problem/C2
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int enco=0;
//cout<<'!'<<" "<<l<<"\n"<<endl;
//cout<<'?'<<" "<<l<<" "<<r<<"\n"<<endl;
//cout.flush();

int ask(int l, int r)
{
	if (l == r)
		return -1;
	cout << "? " << l << " " << r << endl;
	cout.flush();
	int x;
	cin >> x;
	return x;
}


void binary(int l,int r)
{
	int mid,pos;
	pos=ask(l,r);
	mid=ask(l,pos);
	
	if (mid == pos)
	{
		int ini = l, fin = pos;
		while (ini < fin)
		{
			int mid = (ini + fin + 1) / 2;
			if (ask(mid, r) == pos)
				ini = mid;
			else
				fin = mid - 1;
		}
		enco=ini;
	}
	else
	{
		int ini = pos, fin = r;
		while (ini < fin)
		{
			int mid = (ini + fin) / 2;
			if (ask(l, mid) == pos)
				fin = mid;
			else
				ini = mid + 1;
		}
		enco=ini;
	}
}


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int l=1,r=n;
	binary(l,r);
	cout<<'!'<<" "<<enco<<"\n"<<endl;
	
	return 0;
}
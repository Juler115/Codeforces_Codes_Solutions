// Problem: B. MEXor Mixup
// Contest: Codeforces - Codeforces Round #742 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1567/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

map<long long,long long> Xors;
void Xo()
{
	Xors[0]=0;
	for(long long i=1;i<300000;i++)
	{
		Xors[i]=Xors[i-1]^i;
	}
}


int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	long long t=0;
	cin>>t;
	Xo();
	while(t--)
	{
		long long a,b;
		cin>>a>>b;
		long long sis=0;
		long long x=0;
		x=Xors[a-1];
		//cout<<Xor<<"\n";
		sis+=a;
		//cout<<sis<<"\n";
		if((x)==b)cout<<sis<<"\n";
		else if(x!=b && (x^b)!=a)cout<<++sis<<"\n";
		else cout<<sis+2<<"\n";
	}
	
	return 0;
}

// Problem: B. Nezzar and Lucky Number
// Contest: Codeforces - Codeforces Round 698 (Div. 2)
// URL: https://codeforces.com/contest/1478/problem/B
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

bool lucky(int x,int d)
{
	while(x>0)
	{
		if(x%10==d)return true;
		x/=10;
	}
	return false;
}

bool solve(long long n,long long d)
{
	while(n>0)
	{
		//cout<<n<<" ";
		if(lucky(n,d))return true;
		n-=d;
	}
	return false;
}


int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    //recive the test cases
	long long t=0;
	cin>>t;
	while(t--)
	{
		//recive the q numbers and the d lucky number
		long long q,d;
		cin>>q>>d;
		for(long long i=0;i<q;i++)
		{
			 long long x;
			 cin>>x;
			 cout<<(solve(x,d)? "YES":"NO")<<"\n";
			 //cout<<lucky(7);
		}
		
	}
	
	return 0;
}

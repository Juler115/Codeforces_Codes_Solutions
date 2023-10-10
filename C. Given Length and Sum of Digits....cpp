// Problem: C. Given Length and Sum of Digits...
// Contest: Codeforces - Codeforces Round 277.5 (Div. 2)
// URL: https://codeforces.com/problemset/problem/489/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
		if(m>9*n || (m==0 && n>1)){
			cout<<-1<<" "<<-1;
			return 0;
		}
		if(m==0 && n==1){
			cout<<0<<" "<<0;
			return 0;
		}
		
		string mini(n,'0'),maxi(n,'0');
		int num=m;
		int i=0;
		while(num)
		{
			if(num>=9){
				mini[i]='9';
				num-=9;
			}
			else{
				mini[i]=num+'0';
				num=0;
			}
			i++;
		}
		maxi=mini;
		reverse(maxi.begin(),maxi.end());
		if(maxi[0]=='0'){
			maxi[0]='1';
			maxi[n-i]--;
		}
		cout<<maxi<<" "<<mini;

	
	return 0;
}

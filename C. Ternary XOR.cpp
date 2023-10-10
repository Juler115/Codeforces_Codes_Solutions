// Problem: C. Ternary XOR
// Contest: Codeforces - Codeforces Round 629 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1328/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n;
	cin>>n;
	string x;
	cin>>x;
	string a1,a2;
	for(int i=0;i<n;i++){
		if(x[i]=='0'){
			a1+='0';
			a2+='0';
		}
		else if(x[i]=='2'){
			a1+='1';
			a2+='1';
		}
		else{
			a1+='1';
			a2+='0';
			for(int j=i+1;j<n;j++){
				a1+='0';
				a2+=x[j];
			}
			goto fin;
		}
	}
	fin:;
	cout<<a1<<"\n"<<a2<<"\n";
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=1;
	cin>>t;
	while(t--)
		solve();
	
	return 0;
}

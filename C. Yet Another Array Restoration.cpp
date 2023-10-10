// Problem: C. Yet Another Array Restoration
// Contest: Codeforces - Codeforces Round 667 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1409/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n,x,y;
	cin>>n>>x>>y;
	n-=2;
	int dif=y-x;
	int dif2=x-1;
	int aux=1;
	for(int i=1;i<=dif;i++){
		if(dif%i==0 && i*n+x>=y){
			aux=i;
			break;
		}
	}
	vector<int>ans;
	ans.push_back(x);
	ans.push_back(y);
	int aux2=x+aux;
	for(int i=0;i<dif/aux-1;i++){
		if(n==0)break;
		ans.push_back(aux2);
		aux2+=aux;
		n--;
	}
	aux2=x-aux;
	while(aux2>=aux+1){
		if(n==0)break;
		ans.push_back(aux2);
		aux2-=aux;
		n--;
	}
	aux2=y+aux;
	while(n--){
		ans.push_back(aux2);
		aux2+=aux;
	}
	for(auto a:ans)cout<<a<<" ";
	cout<<"\n";	
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
		solve();
	
	return 0;
}

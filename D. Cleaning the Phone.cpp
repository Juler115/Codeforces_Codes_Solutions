// Problem: D. Cleaning the Phone
// Contest: Codeforces - Codeforces Round 697 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1475/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mk make_pair
#define s second
#define f first

void solve(){
	int n,m;
	cin>>n>>m;
	vector<int>nums(n);
	vector<int>a1,a2;
	int sum=0;
	for(int i=0;i<n;i++){
		auto &aux=nums[i];
		cin>>aux;
		sum+=nums[i];
	}
	for(int i=0;i<n;i++){
		int aux;
		cin>>aux;
		if(aux==2)a2.push_back(nums[i]);
		else a1.push_back(nums[i]);
		
	}
	if(sum<m){
		cout<<-1<<"\n";
		return;
	}
	sort(a1.begin(),a1.end(),greater<int>());
	sort(a2.begin(),a2.end(),greater<int>());
	int suma1=accumulate(a1.begin(),a1.end(),0ll);
	int suma2=0,ans=INT_MAX;
	int r=a1.size();
	for(int i=0;i<=a2.size();i++){
		while(r>0 && suma1+suma2-a1[r-1]>=m){
			r--;
			suma1-=a1[r];
		}
		if(suma1+suma2>=m){
			ans=min(ans,2*i+r);
		}
		if(i<a2.size()){
			suma2+=a2[i];
		}
	}
	cout<<ans<<"\n";
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

// Problem: C. Array Destruction
// Contest: Codeforces - Codeforces Round 696 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1474/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

vector<int>ans;
multiset<int,greater<int>>aux;
bool pasa=0;

void print(){
	for(auto a:aux)cout<<a<<" ";
	cout<<"\n";
}

void solve(){
	int k;
	while(aux.size()>1){
		//print();
		k=*aux.begin();
		ans.push_back(*aux.begin());
		aux.erase(aux.begin());
		//print();
		auto it=aux.find(k-*aux.begin());
		if(it==aux.begin() && *it!=*++it)break;
		//cout<<k-*aux.begin()<<"\n";
		if(it==aux.end() || it==aux.begin())break;
		ans.push_back(*it);
		aux.erase(aux.find(*it));
		//print();
	}
	//print();
	if(aux.size()==1)pasa=1;
	ans.push_back(*aux.begin());
}


int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		aux.clear();
		ans.clear();
		pasa=0;
		int n;
		cin>>n;
		n*=2;
		vector<int>nums(n);
		for(int i=0;i<n;i++)cin>>nums[i];
		sort(nums.begin(),nums.end(),greater<int>());
		multiset<int,greater<int>>aux2;
		for(auto a:nums)aux.insert(a);
		aux2=aux;
		for(int i=1;i<n;i++)
		{
			aux=aux2;
			ans.clear();
			ans.push_back(nums[i]);
			aux.erase(aux.find(nums[i]));
			
			solve();
			if(pasa){
				cout<<"YES\n";
				cout<<ans[0]+ans[1]<<"\n";
				for(int i=1;i<n;i+=2){
					cout<<ans[i-1]<<" "<<ans[i]<<"\n";
				}
				goto fin;
			}
		}
		cout<<"NO\n";
		fin:;
		//cout<<"\n";
	}
	
	return 0;
}
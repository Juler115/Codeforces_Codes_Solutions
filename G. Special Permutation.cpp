// Problem: G. Special Permutation
// Contest: Codeforces - Codeforces Round 640 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1352/G
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n<=3){
			cout<<-1<<"\n";
			continue;
		}
		vector<int>ans;
		for(int i=1;i<=n;i+=2)
		{
			ans.push_back(i);
		}
		if(n%2==0)swap(ans[ans.size()-1],ans[ans.size()-2]);
		int mid=ans.size()-1;
		if(n%2!=0){
			n--;
			for(int i=n;i>0;i-=2)
			{
				ans.push_back(i);
			}
			swap(ans[mid+1],ans[mid+2]);
		}
		else{
			for(int i=n;i>0;i-=2)
			{
				ans.push_back(i);
			}			
		}
		for(auto a:ans)cout<<a<<" ";
		cout<<"\n";
	}
	
	return 0;
}

// Problem: E. Accidental Victory
// Contest: Codeforces - Codeforces Round 702 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1490/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

struct sort_pred {
    bool operator()(const std::pair<int,int> &left, const std::pair<int,int> &right) {
        return left.second < right.second;
    }
};


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
		vector<pair<int,int>>parti;
		int sum=0;
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			parti.push_back(make_pair(x,i));
			sum+=x;
		}
		sort(parti.begin(),parti.end());
		int ans=1;
		for(int j=n-1;j>0;j--)
		{
			sum-=parti[j].first;
			if(sum>=parti[j].first)ans++;
			else {
				parti[j-1].second=0;
				for(int i=j-2;i>=0;i--)parti[i].second=0;
				break;
			}
		}
		cout<<ans<<"\n";
		sort(parti.begin(),parti.end(),sort_pred());
		for(auto a:parti)
		{
			if(a.second!=0)cout<<a.second<<" ";
		}
		
		cout<<"\n";
	}
	
	return 0;
}

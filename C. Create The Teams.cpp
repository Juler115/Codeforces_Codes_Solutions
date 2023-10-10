// Problem: C. Create The Teams
// Contest: Codeforces - Educational Codeforces Round 91 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1380/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
	int t=0;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		vector<int>prog;
		int ans=0;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			if(a>=x)ans++;
			else{
				prog.push_back(a);
			}
		}
		sort(prog.begin(),prog.end(),greater<int>());
		int nums=0;
		for(int i=0;i<prog.size();i++)
		{
			int y=prog[i];
			nums++;
			//cout<<((x+y-1)/y)<<" "<<nums<<"\n";
			if(((x+y-1)/y)<=nums){
				nums=0;
				ans++;
			}
		}
		cout<<ans<<"\n";
	}
	
	return 0;
}

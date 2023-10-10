// Problem: B. AGAGA XOOORRR
// Contest: Codeforces - Codeforces Round 717 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1516/B
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
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ac=0;
		vector<int>nums(n);
		for(int i=0;i<n;i++)
		{
			cin>>nums[i];
			ac=ac^nums[i];
		}
		if(ac==0)cout<<"YES\n";
		else{
			int t = 0, c = 0;
	    	for(int i=0;i<n;i++) {
	    		t^=nums[i];
	    		if(t==ac){
	    			c++;
	    			t = 0;
	    		}
	    	}
	    	if(c >= 3 ){
	    		cout << "YES" << '\n';
	    	}
	    	else{
		    	cout << "NO" << '\n';
	    	}
		}
	}
	
	return 0;
}

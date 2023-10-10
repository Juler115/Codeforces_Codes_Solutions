// Problem: F. Magic Wiint Save the World
// Contest: Codeforces - Codeforces Round 894 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1862/F
// Memory Limit: 256 MB
// Time Limit: 4000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int x,y;
	cin>>x>>y;
	int n;
	cin>>n;
	vector<int>nums(n);
	int sum=0,ans=INT_MAX;
	for(int i=0;i<n;i++)cin>>nums[i],sum+=nums[i];
	set <int> st;
        st.insert(0);
    	for (int i = 1; i<=n; i++){
            set <int>::reverse_iterator rit;
            for (rit=st.rbegin(); rit!=st.rend(); rit++){
                int num = *rit + nums[i];
                st.insert(num);
            }
        }
 
        for (auto au : st){
            int aux = 0;
            int falt = sum - au;
            //fire - water
            aux += au/x;
            if (au%x > 0) aux++;
            falt -= (aux*y);
            if (falt > 0){
                aux += falt/y;
                if (falt%y > 0) aux++;
            }
            ans = min(ans,aux);
            //water - fire
            falt = sum - au;
            aux += au/y;
            if (au%y > 0) aux++;
            falt -= (aux*x);
            if (falt > 0){
                aux += falt/x;
                if (falt%x > 0) aux++;
            }
            ans = min(ans,aux);
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

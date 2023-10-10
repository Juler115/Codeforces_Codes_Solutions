// Problem: D2. Half of Same
// Contest: Codeforces - Codeforces Round 748 (Div. 3)
// URL: https://codeforces.com/contest/1593/problem/D2
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
vector<int>nums;

 
void solve(){
	int n;
	cin>>n;
	nums.resize(n);
	vector<vector<int>>dif(n);
	vector<int>dif2;
	for(int i=0;i<n;i++)cin>>nums[i];
	for(int i=0;i<nums.size();i++){
		for(int j=i+1;j<n;j++){
			dif[i].push_back(abs(nums[i]-nums[j]));
			dif2.push_back(abs(nums[i]-nums[j]));
		}
	}
	vector<int>ans;
	for(int i=0;i<dif2.size();i++){
		int aux=0;
		for(int j=0;j<n;j++){
			for(int k=0;k<dif[j].size();k++){
				if(__gcd(dif2[i],dif[j][k])==min(dif2[i],dif[j][k])){
					aux++;
					break;
				}	
			}
		}
		if(aux>=n/4){
			ans.push_back(dif2[i]);
		}
		if(aux>=n/2){
			cout<<-1<<"\n";
			return;
		}
	}
	//for(auto a:dif)cout<<a<<" ";
	//cout<<"\n";
	sort(ans.begin(),ans.end());
	if(ans.size()==0){
		cout<<1<<"\n";
	}
	else cout<<ans.back()<<"\n";

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
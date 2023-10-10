// Problem: D. Decrease the Sum of Digits
// Contest: Codeforces - Codeforces Round 667 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1409/D
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
		vector<int> num(20);
		int n;
		cin>>n;
		int s;
		cin>>s;
		int ori=0;
		int j=0;
		while(n){
			num[j]=(n%10);
			ori+=n%10;
			n/=10;
			j++;
		}
		//for(auto a:num)cout<<a;
		//cout<<"\n";
		if(ori<=s){
			cout<<0<<"\n";
			continue;
		}
		else{
			int ans=0;
			int posi=1;
			for(int i=0;i<18;i++)
			{
				if(i!=0){
					posi*=10;
				}
				if(num[i]==0)continue;
				else if(num[i]==10){
					num[i+1]++;
					num[i]=0;
					ori-=9;
				}
				else{
					ori-=num[i]-1;
					ans+=((10-num[i])%10)*posi;
					num[i]=0;
					num[i+1]++;
				}
				if(ori<=s)break;
				//for(auto a:num)cout<<a;
				//cout<<"\n";
			}
			cout<<ans<<"\n";
		}
	}
	
	return 0;
}

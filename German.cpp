#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n;
	cin>>n;
	int aux=n,ceros=0;
	while(aux>0){
		aux/=10;
		ceros++;
	}
	if(n<10)ceros++;
	set<int>nums;
	for(int i=1;i<=9;i++)nums.insert(i);
	int ans=ceros-1;
	while(*nums.begin()<=n){
		ans++;
		int a=*nums.begin();
		nums.erase(nums.begin());
		int b=a%10;
		a*=10;
		a+=b;
		nums.insert(a);
	}
	//cout<<*nums.begin()<<" ";
	cout<<ans<<"\n";
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=1;
	//cin>>t;
	while(t--)
		solve();
	
	return 0;
}

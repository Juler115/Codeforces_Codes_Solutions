#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	int n;
	cin>>n;
	vector<int> primes={2,3,5,7,11,13,17,19,23,29};
	int m=primes.size();
	int ans=0;
	for(int i=1;i<(1<<m);i++)
	{
		int lcm=1;
		for(int j=0;j<m;j++)
		{
			if((i>>j)&1){
				lcm*=primes[j];
			}
		}
		//cout<<"\n";
		if(__builtin_popcount(i)%2==0)
		{
			ans-=(n/lcm);
		}
		else{
			ans+=(n/lcm);
		}
	}
	cout<<ans;
	
	
	return 0;
}

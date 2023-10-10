#include<iostream>
using namespace std;
main()
{
	ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	if(m<=n )
	{
		cout<< n-m <<endl;
		return 0;
	}
	int ans=0;
	while(n < m)
	{
		if( m%2 )
			m++;
		else
			m/=2;
		ans++;
	}
	ans+= ( n-m );
	cout<<ans<<endl;
	return 0;
}
// Problem: A. Young Physicist
// Contest: Codeforces - Codeforces Beta Round #63 (Div. 2)
// URL: https://codeforces.com/problemset/problem/69/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    
    int x=0,y=0,z=0,co,h=0;
	int n=0;
	cin>>n;
	for(int a=0;a<n;a++)
	{
		for(int i=0;i<3;i++)
		{
			cin>>co;
			if(h==0){
			x+=co;
			h++;
			}
			else if(h==1){
			y+=co;
			h++;
			}
			else if(h==2)
			{
				z+=co;
				h=0;
			}
		}
	}
	//cout<<x<<y<<z;
	if(x==0 && y==0 && z==0)cout<<"YES\n";
	else cout<<"NO";
	
	return 0;
}

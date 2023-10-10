// Problem: B. Sort the Array
// Contest: Codeforces - Codeforces Round 258 (Div. 2)
// URL: https://codeforces.com/problemset/problem/451/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;


int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	int n;
	cin>>n;
	vector<int> a(n),b(n);
	for(int i=0;i<n;i++)cin>>a[i],b[i]=a[i];
	int l=-1,r=-1,count=0;
	sort(b.begin(),b.end());
	for(int i=0;i<n;i++)
	{
		if(a[i]==b[i])count++;
	}
	if(n==count){cout<<"yes\n1 1";return 0;}
	
	bool pasa=0;
	int i;
	for(i=0;i<n-1,pasa==0;)
	{
		if(a[i]<a[i+1])i++;
		else{
			l=i;
			r=i;
			while(a[i]>a[i+1] && i<n-1)
			{
				r++;
				i++;
			}
			reverse(a.begin()+l,a.begin()+r+1);
			pasa=true;
		}
	}
	//cout<<l<<" "<<r;
	//for(auto y:a)cout<<y<<" ";
	for(int i=0;i<n;i++)
	{
		if(a[i]!=b[i]){cout<<"no";return 0;}
	}
	cout<<"yes\n"<<l+1<<" "<<r+1;
	
	return 0;
}

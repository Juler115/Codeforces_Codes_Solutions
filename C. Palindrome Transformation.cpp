// Problem: C. Palindrome Transformation
// Contest: Codeforces - Codeforces Round 277 (Div. 2)
// URL: https://codeforces.com/problemset/problem/486/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int ans=0;
	int mid=0;
	if(n%2==0)mid=n/2;
	else mid=(n-1)/2;
	
	int md=(mid+1)/2;
	if(k>mid)reverse(s.begin(),s.end()),k=n-k+1;
	s='.'+s;
	int auxk=k;
	//cout<<s<<"\n";
	for(int i=1;i<=mid;i++)
	{
		if(s[i]!=s[n-i+1]){
			ans+=abs(i-k);
			k=i;
			char x=s[i],y=s[n-i+1];
			ans+=min(abs(x-y),26-abs(x-y));
		}
	}
	int aux=0;
	k=auxk;
	for(int i=mid;i>=1;i--)
	{
		if(s[i]!=s[n-i+1]){
			aux+=abs(i-k);
			k=i;
			char x=s[i],y=s[n-i+1];
			//cout<<x<<"\n";
			aux+=min(abs(x-y),26-abs(x-y));
		}
	}
	cout<<min(ans,aux)<<"\n";
	
	
	return 0;
}

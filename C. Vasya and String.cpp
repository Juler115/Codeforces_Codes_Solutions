// Problem: C. Vasya and String
// Contest: Codeforces - Codeforces Round 354 (Div. 2)
// URL: https://codeforces.com/problemset/problem/676/C
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
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int maxi=0,tam=0,r=0,aux=k;
	for(int l=0;l<n;l++)
	{
		while(k>=0 && r<n){
			if(s[r]=='a')r++,tam++;
			else{
				if(k==0)break;
				k--;
				tam++;
				r++;
			}
		}
		maxi=max(maxi,tam);
		if(s[l]=='b')k++;
		tam--;
	}
	tam=0,r=0;
	k=aux;
	for(int l=0;l<n;l++)
	{
		while(k>=0 && r<n){
			if(s[r]=='b')r++,tam++;
			else{
				if(k==0)break;
				k--;
				tam++;
				r++;
			}
		}
		maxi=max(maxi,tam);
		if(s[l]=='a')k++;
		tam--;
	}
	cout<<maxi;
	
	return 0;
}

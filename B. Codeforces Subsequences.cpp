// Problem: B. Codeforces Subsequences
// Contest: Codeforces - Codeforces Global Round 8
// URL: https://codeforces.com/problemset/problem/1368/B
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

long long powr(long long a,long long  b)
	{
		long long res=1;
		while(b){
			if(b&1) res *=a;
			a*=a;
			b/=2;
		}
		return res;
	}


char letra(int i){
	switch(i){
		case 0:return 'c';
		case 1:return 'o';
		case 2:return 'd';
		case 3:return 'e';
		case 4:return 'f';
		case 5:return 'o';
		case 6:return 'r';
		case 7:return 'c';
		case 8:return 'e';
		case 9:return 's';
	}
}

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int l=1e16;
	int a=0,ap=0,b=0,bp=0;
	int prim=10,seg=0;
	for(int i=60;i>2;i--)
	{
		prim=10;
		seg=0;
		while(prim > 0){
			if((powr(i,prim)*powr(i-1,seg))>=n){
				if(i*prim+(i-1)*seg < l){
					l=i*prim+(i-1)*seg;
					a=i;
					ap=prim;
					b=i-1;
					bp=seg;
				}
			}
			prim--;
			seg++;
		}
	}
	int j=10;
	while(j >= 0){
			if(powr(2,j)>=n){
				if(2*j < l){
					l=2*j;
					a=2;
					ap=j;
					b=0;
					bp=0;
				}
			}
			j--;
	}
	//cout<<a<<" "<<ap<<" "<<b<<" "<<bp;
	string ans="";
	if(a==2){
		int i=0;
		while(ap--)
		{
			string nuevo(a,letra(i));
			ans+=nuevo;
			i++;
		}
		while(i<10){
			ans+=letra(i);
			i++;
		}
	}
	else
	{
		int i=0;
		while(ap--)
		{
			string nuevo(a,letra(i));
			ans+=nuevo;
			i++;
		}
		while(bp--)
		{
			string nuevo(b,letra(i));
			ans+=nuevo;
			i++;
		}
	}
	cout<<ans;
	
	
	return 0;
}

// Problem: C. Hamburgers
// Contest: Codeforces - Codeforces Round 218 (Div. 2)
// URL: https://codeforces.com/problemset/problem/371/C
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
#define d double


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    //recive all the values and count the number of B,S and C of the recipe
	string ss;
	cin>>ss;
	int b,s,c;
	cin>>b>>s>>c;
	int pb,ps,pc;
	cin>>pb>>ps>>pc;
	int r;
	cin>>r;
	int nb=0,ns=0,nc=0,ans=0;
	for(int i=0;i<ss.size();i++)
	{
		if(ss[i]=='B')nb++;
		else if(ss[i]=='S')ns++;
		else nc++;
	}
	//cout<<nb<<" "<<ns<<" "<<nc<<"\n";
	
	//count the number of burgers you can do with the initial vals
	int mini=INT_MAX;
	if(nb!=0)mini=min(mini,b/nb);
	if(ns!=0)mini=min(mini,s/ns);
	if(nc!=0)mini=min(mini,c/nc);
	ans+=mini;
	b-=nb*mini;
	s-=ns*mini;
	c-=nc*mini;
	//cout<<ans<<"\n";
	
	//count the maximun number you can do
	int maxi=1;
	if(nb!=0)maxi=max(maxi,(int)ceil((d)b/(d)nb));
	if(ns!=0)maxi=max(maxi,(int)ceil((d)s/(d)ns));
	if(nc!=0)maxi=max(maxi,(int)ceil((d)c/(d)nc));
	//<maxi<<"\n";
	
	int aux=0;
	if(b<nb*maxi)aux+=((nb*maxi)-b)*pb;
	if(s<ns*maxi)aux+=((ns*maxi)-s)*ps;
	if(c<nc*maxi)aux+=((nc*maxi)-c)*pc;
	//cout<<aux<<"\n";
	if(aux<=r)
	{
		ans+=maxi;
		r-=aux;
		b=0;
		s=0;
		c=0;
		//cout<<r<<"\n";
	}
	else{
		while(aux>r)
		{
			maxi--;
			if(maxi==0)break;
			aux=0;
			if(b<nb*maxi)aux+=((nb*maxi)-b)*pb;
			if(s<ns*maxi)aux+=((ns*maxi)-s)*ps;
			if(c<nc*maxi)aux+=((nc*maxi)-c)*pc;
		}
		b-=nb*maxi;
		s-=ns*maxi;
		c-=nc*maxi;
		ans+=maxi;
		r-=aux;
		cout<<ans<<"\n";
		return 0;
	}
	//cout<<b<<" "<<s<<" "<<c<<"\n";
	int tcost=nb*pb + ns*ps + nc*pc;
	ans+=r/tcost;
	cout<<ans<<"\n";
	
	
	
	return 0;
}

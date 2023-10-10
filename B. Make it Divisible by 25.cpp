// Problem: B. Make it Divisible by 25
// Contest: Codeforces - Codeforces Round 748 (Div. 3)
// URL: https://codeforces.com/contest/1593/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	string s;
	cin>>s;
	vector<char>num1(s.begin(),s.end()),num2;
	num2=num1;
	int ans=INT_MAX;
	int aux1=0,aux2=0,aux=0;
	while(num1.back()!='5' && num1.size()>1){
		if(num1.back()!='0')aux1++;
		num1.pop_back();}
	while(num2.back()!='0' && num2.size()>1)aux2++,num2.pop_back();
	for(int i=num1.size()-2;i>=0;i--){
		if((num1[i]=='2'|| num1[i]=='7')){
			ans=min(aux+aux1,ans);
			break;
		}
		aux++;
	}
	aux=0;
	for(int i=num2.size()-2;i>=0;i--){
		if(num2[i]=='5' || (i<num2.size()-2 && (num2[i]=='1') && num2[i+1]=='0')){
			ans=min(aux+aux2,ans);
			break;
		}
		if(num2[i]!='0')aux++;
	}
	cout<<ans<<"\n";
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=1;
	cin>>t;
	while(t--)
		solve();
	
	return 0;
}

// Problem: D. Double Strings
// Contest: Codeforces - Codeforces Round 806 (Div. 4)
// URL: https://codeforces.com/contest/1703/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
#define pb push_back
//create a map to store the string
unordered_map<string,bool>cads;
vector<string>cad;


int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    //recive test cases
	int t=0;
	cin>>t;
	while(t--)
	{
		cads.clear();
		cad.clear();
		//recive the number of string
		int n;
		cin>>n;
		//recive the string
		for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			cads[s]=true;
			cad.pb(s);
		}
		//check every cad to seek 
		for(int i=0;i<n;i++)
		{
			//check every posible word
			string aux="";
			string aux2="";
			bool pasa=false;
			for(int j=1;j<cad[i].size();j++)
			{
				aux=cad[i].substr(0,j);
				aux2=cad[i].substr(j,cad[i].size());
				//cout<<aux<<" "<<aux2<<"\n";
				if(cads[aux]==true && cads[aux2]==true)pasa=true;	
			}
			if(pasa)cout<<1;
			else cout<<0;
		}
		cout<<"\n";
	}
	
	return 0;
}

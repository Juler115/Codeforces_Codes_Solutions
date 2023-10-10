// Problem: A. Chat room
// Contest: Codeforces - Codeforces Beta Round #54 (Div. 2)
// URL: https://codeforces.com/problemset/problem/58/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string ori;
	cin>>ori;
	int validez=0,h=0,e=0,l=0;
	
	
	for (int i = 0,s=ori.length(); i < s; i++)
	{
		if(ori[i]=='h')
		{
			h++;
		}
		else if(ori[i]=='e' && h>=1 )
		{
			e++;
		}
		else if(ori[i]=='l' && e>=1 )
		{
			l++;
		}
		else if(ori[i]=='o' && l>=2 )
		{
			validez=1;
			break;
		}
		
		//cout<<"v ";
	}
	
    if(validez)cout<<"YES";
    else cout<<"NO";
	
	return 0;
}

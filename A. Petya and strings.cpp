// Problem: A. Petya and Strings
// Contest: Codeforces - Codeforces Beta Round #85 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/112/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string ori,ori2;
	cin>>ori>>ori2;
	int iguales=0;
	
	std:: transform(ori.begin(), ori.end(), ori.begin(), ::tolower);
	std:: transform(ori2.begin(), ori2.end(), ori2.begin(), ::tolower);
	
	for (int i = 0,s=ori.length(); i < s; i++)
	{
		if(ori[i]==ori2[i]) iguales++;
		else if (ori[i]>ori2[i]) {iguales=0;break;}
		else if (ori[i]<ori2[i]) {iguales=-1;break;}
	}
	if(iguales>0) cout<<"0";
	else if(iguales==0) cout<<"1";
	else if(iguales<0) cout<<"-1";
	
	return 0;
}

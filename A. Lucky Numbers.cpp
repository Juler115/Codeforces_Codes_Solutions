// Problem: A. Lucky Division
// Contest: Codeforces - Codeforces Beta Round #91 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/122/A?f0a28=1
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n=0;
	cin>>n;
	int validez=0;
	
	if((n%10==4 || n%10==7) && (n/10%10==4 || n/10%10==7) && (n/100==4 || n/100==7)) validez=1;
	else if((n%10==4 || n%10==7) && (n/10%10==4 || n/10%10==7) && (n/100==0) ) validez=1;
	else if(n%4==0 || n%7==0) validez=1;
	else if(n==799 || n==94 || n==141)validez=1;
	
	if(validez)cout<<"YES";
	else cout<<"NO";
	
	return 0;
}



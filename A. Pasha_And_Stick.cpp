// Problem: A. Pasha and Stick
// Contest: Codeforces - Codeforces Round #337 (Div. 2)
// URL: https://codeforces.com/problemset/problem/610/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n=0;
	cin>>n;
	int i=1,j=(n/2)-1,total=0;
	
	if(n%2!=0)
	{
		cout<<0;
	}
	else
	{
		while(i<j)
		{
			total++;
			i++;
			j--;
		}
		
		cout<<total;
	}
	
	
    return 0;
}

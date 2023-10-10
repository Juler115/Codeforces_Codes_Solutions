// Problem: A. Dubstep
// Contest: Codeforces - Codeforces Round #130 (Div. 2)
// URL: https://codeforces.com/problemset/problem/208/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

	string wub;
	cin>>wub;
	wub+="  ";
	string nowub="";
	int n=wub.length(),espa=0,ini=0;
	
	for(int i=0;i<n;i++)
	{
		if(wub[i]!='W' || wub[i+1]!='U' || wub[i+2]!='B')
		{
			nowub+=wub[i];
			espa=1;
			ini=1;
		}else
		{
			if(espa==1 && ini!=0) {
				nowub+=" ";
				espa=0;	
			}
			i+=2;
			//nowub+=" ";
		}
	}
	cout<<nowub;
	
	return 0;
}

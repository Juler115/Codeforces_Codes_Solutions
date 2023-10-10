// Problem: C. Team
// Contest: Codeforces - Codeforces Round 235 (Div. 2)
// URL: https://codeforces.com/problemset/problem/401/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	int n,m;
	cin>>n>>m;
	if((n-1)>m || m > 2*(n+1))cout<<-1;
	else{
		if(m==n-1){
			cout<<0;
			for(int i=0;i<m;i++)
			{
				cout<<10;
			}
		}
		else 
		{
			while(m>0 && n>0){
	        	if(m<2*n){
	            	cout<<"10";
	            	m--; n--;
	     		}
	        	else{
	            	cout<<"110";
	            	m-=2; n--;
	       		}	
   			 }
   			 for(int i=0;i<m;i++)cout<<1;
		}
		
	}
	
	return 0;
}

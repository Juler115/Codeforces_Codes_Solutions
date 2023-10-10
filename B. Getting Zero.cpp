// Problem: B. Getting Zero
// Contest: Codeforces - UP-Practica3-EDAIII
// URL: https://codeforces.com/gym/434693/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n;cin>>n;
	
	for(int i=1;i<=n;i++){
		
		int x,ans=20;cin>>x;
		
		for(int j=0;j<=15;j++)
		
		for(int k=0;k<=15;k++)
		
			if(((x+j)<<k)%32768==0) ans=min(ans,j+k);
			
		cout<<ans<<" ";
	}
}

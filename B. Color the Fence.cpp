#include<bits/stdc++.h>
using namespace std;
int i,n,s=1000001,l,a[9];
int main(){
	cin>>n;
	for(int i=0; i<9; i++)
	{
		cin>>a[i];
		s=min(s,a[i]); 	
	}
	l=n/s; 
	if(!l)
		cout<<-1;
	while(l--)
		for(i=8;i>=0;i--)
			if((n-a[i])/s==l && n>=a[i]){
				cout<<i+1; 
				n-=a[i]; 
				break;
			}
}
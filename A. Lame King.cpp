// Problem: A. Lame King
// Contest: Codeforces - Nebius Welcome Round (Div. 1 + Div. 2)
// URL: https://codeforces.com/contest/1804/problem/0?7c701c71fbe2401e4244ee10fc343408b70971521b950c77d6a44a49256a40f4=1&a255a61a59913b2ceb30f7d575a0c876c90f56ab7f0643e34331ade4871be4d8=1
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
//create the function solve
int solve(int xd,int yd)
{
	int mov=0;
	int xr=0,yr=0;
	bool a,b,c,d;
	while(xr!=xd || yr!=yd)
	{
		if(abs(abs(xr)-abs(xd))>abs(abs(yr)-abs(yd)))
		{
			if(xr<xd && !c){
				mov++;
				xr++;
				c=true;
				a=b=d=false;
			}
			else if(xr>xd && !d){
				mov++;
				xr--;
				d=true;
				a=b=c=false;
			}
			else if(yr<yd && !a){
				mov++;
				yr++;
				a=true;
				b=c=d=false;
			}
			else if(yr>yd && !b){
				mov++;
				yr--;
				b=true;
				c=a=d=false;
			}
			else {
				mov++;
				a=b=c=d=false;
			}
		}
		else{
			if(yr<yd && !a){
				mov++;
				yr++;
				a=true;
				b=c=d=false;
			}
			else if(yr>yd && !b){
				mov++;
				yr--;
				b=true;
				c=a=d=false;
			}
			else if(xr<xd && !c){
				mov++;
				xr++;
				c=true;
				a=b=d=false;
			}
			else if(xr>xd && !d){
				mov++;
				xr--;
				d=true;
				a=b=c=false;
			}
			else {
				mov++;
				a=b=c=d=false;
			}
		}
	}
	return mov;
	
}

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    //recive the test cases
	int t=0;
	cin>>t;
	while(t--)
	{
		//recive the x,y of the king and the x,y of the dest
		int xd,yd;
		cin>>xd>>yd;
		cout<<solve(xd,yd)<<"\n";
	}
	
	return 0;
}

// Problem: A. Pashmak and Garden
// Contest: Codeforces - Codeforces Round #261 (Div. 2)
// URL: https://codeforces.com/problemset/problem/459/A
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
	
	int x1,y1,x2,y2,x3,y3,x4,y4;
	cin>>x1>>y1>>x2>>y2;
	
	if(x1!=x2 && y1==y2)
	{
		x3=x1;
		y3=abs(x2-x1)+min(y2,y1);
		x4=x2;
		y4=abs(x2-x1)+min(y2,y1);
		cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
	}
	else if(x1==x2 && y1!=y2)
	{
		x3=abs(y2-y1)+min(x2,x1);
		y3=y1;
		x4=abs(y2-y1)+min(x2,x1);
		y4=y2;
		cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
	}
	else if(x1!=x2 && y1!=y2 && abs(x2-x1)==abs(y2-y1))
	{
		x3=x1;
		y3=y2;
		x4=x2;
		y4=y1;
		cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
	}
	else cout<<"-1";
	
	
	return 0;
}

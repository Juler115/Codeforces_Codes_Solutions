#include <bits/stdc++.h>
//https://cses.fi/problemset/task/2189

using namespace std;
#define ll long long

struct Point{ll x,y;};

Point operator +(const Point &A,const Point &B)
	{
		return {A.x+B.x,A.y+B.y};
	}
Point operator *(const Point &A, ll K){
		return {A.x*K,A.y*K};
	}
Point operator -(const Point &A, const Point &B){
		return {A.x-B.x,A.y-B.y};
	}
ll cross(const Point &A, const Point &B){
	return A.x*B.y-A.y*B.x;
}
ll turn(const Point &A,const Point &B, const Point &C){
	ll det=cross(B-A,C-A);
	return (det>0)?1:(det<0)?-1:0;
}
int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	ll t=0;
	cin>>t;
	while(t--)
	{
		ll x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		Point A,B,C;
		A={x1,y1};
		B={x2,y2};
		C={x3,y3};
		ll sol=turn(A,B,C);
		if(sol==1)cout<<"LEFT\n";
		else if(sol==-1)cout<<"RIGHT\n";
		else cout<<"TOUCH\n";
	}
	
	return 0;
}

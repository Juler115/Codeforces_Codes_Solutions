#include <bits/stdc++.h>
//https://cses.fi/problemset/task/2190

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
bool seg_inter(const Point &A, const Point &B,const Point &C, const Point &D)
int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	ll t=0;
	cin>>t;
	while(t--)
	{
		ll x1,y1,x2,y2,x3,y3,x4,y4;
		cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		Point A,B,C,D;
		A={x1,y1};
		B={x2,y2};
		C={x3,y3};
		D={x4,y4};
		bool sol=seg_inter(A,B,C,D);
		if(sol==1)cout<<"Yes\n";
		else cout<<"NO";
		
	}
	
	return 0;
}

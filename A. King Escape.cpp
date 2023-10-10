// Problem: A. King Escape
// Contest: Codeforces - UP-Practica3-EDAIII
// URL: https://codeforces.com/gym/434693/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;


int main(){
    
    int n;
    cin>>n;
	int a1,a2,b1,b2,t1,t2;
    cin>>a1>>a2>>b1>>b2>>t1>>t2;
    int flag= 0;

    if((b1<a1 && t1<a1) || (b1>a1 && t1>a1)){

        if((b2<a2 && t2<a2) || (b2>a2 && t2>a2))
            flag= 1;
    }

    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

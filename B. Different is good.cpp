// Problem: B. Different is Good
// Contest: Codeforces - Codeforces Round #352 (Div. 2)
// URL: https://codeforces.com/problemset/problem/672/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>  
using namespace std;  
typedef long long ll;  
const int inf = 0x3f3f3f3f;  
int main()   
{  
    //freopen("in.txt","r",stdin);
    set<char>ff;
    int n;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
    	ff.insert(s[i]);
    }
    if(n-ff.size()<26&&n<=26)  
    	cout<<n-ff.size()<<endl;
    else
    	cout<<-1<<endl;
    return 0;  
}

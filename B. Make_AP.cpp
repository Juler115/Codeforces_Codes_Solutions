// Problem: B. Make AP
// Contest: Codeforces - Codeforces Round #764 (Div. 3)
// URL: https://codeforces.com/contest/1624/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        map<int,int> map;
 
        for(int i=0;i<n;i++)
        {
            int k=a[i];
            while(k>0)
            {
                if(1<=k&&k<=n&&map[k]==0)
                {
                    map[k]=1;
                    break;
                }
                k=k/2;
            }
 
        }
        int flag=0;
        for(int i=1;i<=n;i++)
            {
                if(map[i]!=1)
                    flag=1;
            }
 
            if(flag)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
    }
}

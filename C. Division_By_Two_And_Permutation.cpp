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
        map<int,int> valor;
 
        for(int i=0;i<n;i++)
        {
            int aa=a[i];
            while(aa>0)
            {
                if(1<=aa && aa<=n && valor[aa]==0)
                {
                    valor[aa]=1;
                    break;
                }
                aa=aa/2;
            }
 
        }
        int correct=0;
        for(int i=1;i<=n;i++)
            {
                if(valor[i]!=1)
                    correct=1;
            }
 
            if(correct)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
    }
}

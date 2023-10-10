#include <bits/stdc++.h>

using namespace std;

struct Point
{
    int x,y;
};
const int MAX = 102;
int n,res = 0,pa[MAX];
Point a[MAX];

int getRoot(int u)
{
    if (pa[u]==u) return u;
    return getRoot(pa[u]);
}

void DFU(int u,int v)
{
    u = getRoot(u);
    v = getRoot(v);
    if (u==v) return;
    pa[u] = v;
    return;
}
bool chosen[MAX];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    memset(chosen,0,sizeof(chosen));
    for (int i=1;i<=n;i++)
        cin>>a[i].x>>a[i].y;
    for (int i=1;i<=n;i++)
        pa[i] = i;
    for (int i=1;i<n;i++)
        for (int j=i+1;j<=n;j++)
            if (a[i].x==a[j].x||a[i].y==a[j].y)
                if (getRoot(i)!=getRoot(j))
                        DFU(i,j);
    for (int i=1;i<=n;i++)
        if (!chosen[getRoot(i)]) chosen[getRoot(i)]=1;
    for (int i=1;i<MAX;i++)
        if (chosen[i]) res++;
    cout<<res-1;
    return 0;
}
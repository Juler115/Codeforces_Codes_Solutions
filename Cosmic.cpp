#include <bits/stdc++.h>
#define F first
#define S second
using namespace std;
using ii=pair<long long,long long>;
const int N=2e5+5;
long long n,m,k,d[N],f[N],s[N];
long long p;
vector<int> g[N];
bool vs[N];
ii menor(long long val, ii w) {
  if (val*w.S < w.F*(k-1)) {
    return make_pair(val,k-1);
  } else return w;
} 
int main() {
  cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
  cin>>n>>m>>k;
  for (int i=1;i<=k;i++) {
    int x;
    cin>>x;
    s[x]++;
  }
  for (int i=1;i<=m;i++) {
    int u,v;
    cin>>u>>v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  priority_queue<ii,vector<ii>,greater<ii>> pq;
  pq.push({0,1});
  while (!pq.empty()) {
    auto x=pq.top();
    pq.pop();
    if (vs[x.S]) continue;
    vs[x.S]=1;
    d[x.S]=x.F;
    for (int u : g[x.S]) pq.push({x.F+1,u});
  }
  for (int i=1;i<=n;i++) vs[i]=0;
  pq.push({0,n});
  while (!pq.empty()) {
    auto x=pq.top();
    pq.pop();
    if (vs[x.S]) continue;
    vs[x.S]=1;
    f[x.S]=x.F;
    if (s[x.S]) p+=x.F;
    for (int u : g[x.S]) pq.push({x.F+1,u});
  }
  ii q = {d[n],1};
  for (int i=1;i<=n;i++) if (s[i]) {
    
    q = menor(d[i]*(k-1)+p-f[i],q);
    long long z=__gcd(q.F,q.S);
    q.F/=z;
    q.S/=z;
  }
  cout<<q.F<<"/"<<q.S<<"\n";
  return 0;
}
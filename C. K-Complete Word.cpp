#include<bits/stdc++.h>
using namespace std;

const int maxn=200007;

int n,k,ans=0;
int cnt[maxn][26];
string s;

int differ(int u,int v){
    int ret=0,mx=0;
    for (int j=0;j<26;++j){
        ret+=cnt[u][j]+cnt[v][j];
        mx=max(mx,cnt[u][j]+cnt[v][j]);
    }
    return ret-mx;
}

int main(){
    int t;
    cin>>t;
    while (t--){
        cin>>n>>k>>s;
        for (int i=0;i<k;++i){
            for (int j=0;j<26;++j){
                cnt[i][j]=0;
            }
        }
        for (int i=0;i<n;++i){
            cnt[i%k][s[i]-'a']++;
        }
        int ans=0;
        for (int i=0;i<k;++i){
            ans+=differ(i,k-1-i);
        }
        cout<<ans/2<<"\n";
    }
    return 0;
}
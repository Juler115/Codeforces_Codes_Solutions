#include<bits/stdc++.h>
using namespace std;
 
int n,t;
vector<int> ans[1007];
int res[1007];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    auto f=[&](int u){
        for (int i=2;i<=u;++i){
            if (u%i==0) return i;
        }
    };
    cin>>t;
    while (t--){
        cin>>n;
        for (int i=1;i<=1000;++i) ans[i].clear();
        for (int i=1;i<=n;++i){
           int u;
           cin>>u; ans[f(u)].push_back(i);
        }
        int ret=0;
        for (int i=1;i<=1000;++i){
            if (ans[i].size()){
                ++ret;
                for (auto c:ans[i]){
                    res[c]=ret;
                }
            }
        }
        cout<<ret<<"\n";
        for (int i=1;i<=n;++i){
            cout<<res[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
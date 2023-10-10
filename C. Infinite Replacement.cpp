#include <bits/stdc++.h>
#define ll long long
#define pb push_back
 
using namespace std;
 
ll tc,n,num,ans;
vector <ll> v;
string s,t;
 
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
 
    cin>>tc;
    while (tc--){
        cin>>s>>t;
        int tam = s.size();
        if (t == "a"){
            cout<<1<<endl;
        }
        else if (t.find('a') == -1){
            cout<<(1LL<<tam)<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}

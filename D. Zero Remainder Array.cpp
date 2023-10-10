#include <bits/stdc++.h>
 
using namespace std;
 
long long tc,n,num,ans,aux,high,pos,k,ini,dif;
vector <long long> v;
bool same = true;
 
int main()
{
    cin>>tc;
    while (tc--){
        cin>>n>>k;
        high = 0, pos = 0, ans = 0;
        v.clear();
        for (int i = 0; i<n; i++){
            cin>>num;
            num = num%k;
            if (num != 0){
                v.push_back(num);
            }
        }
        if (v.size() != 0){
            sort(v.begin(),v.end());
            ini = 0;
            for (int i = 1; i<v.size(); i++){
               if (v[i] != v[i-1]){
                    dif = abs((i-1)-ini) + 1;
                    if (dif > high){
                        pos = v[i-1];
                        high = dif;
                    }
                    ini = i;
               }
            }
            dif = ((v.size()-1)-ini) + 1;
            if (dif > high){
                pos = v[v.size()-1];
                high = dif;
            }
            /*
            for (int i = 0; i<n; i++){
                cout<<v[i]<<" ";
            }
            cout<<endl; */
            //cout<<high<<endl;
            aux = k-pos;
            ans = aux + (k*(high - 1)) + 1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
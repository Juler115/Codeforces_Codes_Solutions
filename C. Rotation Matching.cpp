#include <bits/stdc++.h>

#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define MAX 1e9
#define MIN -1e9
#define mod 1000000007
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr<<#x<<'='<<(x)<<endl;
#define mxn 100005
using namespace std;

int main()
{
    FLASH
    ll n,mx = 1;
    cin >> n;
    ll a[n],b[n];
    ll mp1[n + 1],mp2[n + 1],diff[n + 1];
    memset(mp1,0,sizeof(mp1));
    memset(mp2,0,sizeof(mp2));
    memset(diff,0,sizeof(diff));
    for(int i = 0; i < n; ++i)
        cin >> a[i],mp1[a[i]] = i;
    for(int i = 0; i < n; ++i)
        cin >> b[i],mp2[b[i]] = i;
    for(int i = 0; i < n;++i)
    {
        ll k = mp1[i + 1];
        ll m = mp2[i + 1];
        ll d;
        if(k > m)
            d = (m + (n - k));
        else
            d = m - k;
        diff[d]++;
    }
    for(auto i : diff)
    {
        mx = max(mx,i);
    }
    memset(diff,0,sizeof(diff));
    for(int i = 0; i < n;++i)
    {
        ll k = mp1[i + 1];
        ll m = mp2[i + 1];
        ll d;
        if(k < m)
            d = k + (n - m);
        else
            d = k - m;;
        diff[d]++;
    }
    for(auto i : diff)
    {
        mx = max(mx,i);
    }
    cout<< mx << '\n';
    return 0;
}
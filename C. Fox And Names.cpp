#include<bits/stdc++.h>
using namespace std;
#define ll              long long int
#define vi              vector<int>
#define vl              vector<ll>
#define pii             pair<int,int>
#define pil             pair<int, ll>
#define pll             pair<ll, ll>
#define pli             pair<ll, int>
#define pb(v, a)        v.push_back(a)
#define mp(a, b)        make_pair(a, b)
#define MOD             1000000007
#define rep(i, a, b)    for(i=a; i<=b; ++i)
#define rrep(i, a, b)   for(i=a; i>=b; --i)
#define si(a)           scanf("%d", &a)
#define sl(a)           cin>>a
#define pi(a)           printf("%d", a)
#define pl(a)           cout<<a
#define pn              printf("\n")
ll pow_mod(ll a, ll b)
{
    ll res = 1;
    while(b)
    {
        if(b & 1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}
 
int main()
{
    int n, i, j, k;
    bool connected[26][26];
    memset(connected, false, sizeof(connected));
    si(n);
    vector<string> str;
    string tmp;
    rep(i, 0, n - 1)
    {
        cin>>tmp;
        pb(str, tmp);
    }
    rep(i, 0, n - 1)
    {
        rep(j, i + 1, n - 1)
        {
            rep(k, 0, str[i].length() - 1)
            {
                if(k >= str[j].length())
                {
                    printf("Impossible\n");
                    return 0;
                }
                if(str[i][k] != str[j][k])
                {
                    connected[str[i][k] - 'a'][str[j][k] - 'a'] = true;
                    break;
                }
            }
        }
    }
    //floyd
    rep(k, 0, 25)
        rep(i, 0, 25)
            rep(j, 0, 25)
                if(connected[i][k] && connected[k][j])
                    connected[i][j] = true;
    bool flag = false;
    rep(i, 0, 25)
    {
        if(connected[i][i])
        {
            flag = true;
            break;
        }
    }
    if(flag)
    {
        printf("Impossible\n");
        return 0;
    }
    bool visited[26];
    int degree[26];
    memset(degree, 0, sizeof(degree));
    memset(visited, false, sizeof(visited));
    rep(i, 0, 25)
        rep(j, 0, 25)
            degree[i] += connected[j][i];
    string res = "";
    rep(k, 0, 25)
    {
        rep(i, 0, 25)
        {
            if(degree[i] == 0 && !visited[i])
            {
                res += (char)(i + 'a');
                rep(j, 0, 25)
                {
                    if(connected[i][j])
                    {
                        connected[i][j] = 0;
                        degree[j]--;
                    }
                }
                visited[i] = 1;
                break;
            }
        }
    }
    cout<<res<<endl;
    return 0;
}
// Problem: C. Jumping on Tiles
// Contest: Codeforces - Codeforces Round #820 (Div. 3)
// URL: https://codeforces.com/contest/1729/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
/*
#include <bits/stdc++.h>

using namespace std;
#define pb push_back



int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.size();
		bool visitados[n]={false};
		visitados[0]=true;
		vector<int> orden;
		orden.pb(1);
		int menor=INT_MAX,memorin,saltos=1,peso=0,base=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(visitados[j]==true)continue;
				else
				{
					if(abs((s[base]-96)-(s[j]-96))<menor)menor=abs((s[base]-96)-(s[j]-96)),memorin=j;
					else if(abs((s[base]-96)-(s[j]-96))==menor && ((s[base]-96)>(s[j]-96)))menor=abs((s[base]-96)-(s[j]-96)),memorin=j;
				
				}
			}
			peso+=menor;
			saltos++;
			visitados[memorin]=true;
			orden.pb(memorin+1);
			base=memorin;
			menor=INT_MAX;
			memorin=0;
			if(base==n-1)break;
		}
		cout<<peso<<" "<<saltos<<"\n";
		for(int a:orden) cout<<a<<" ";
		cout<<"\n";
	}

	return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t, n, d, c;
    string s, r;
    cin >> t;
    while(t--){
        cin >> s;
        vector<vector<int>> bk(30);
        n = s.size();
        c = 2;
        d = max(s[0],s[n-1]) - min(s[0],s[n-1]);
        for(int i=1; i<n-1; i++) bk[s[i]-'a'].push_back(i+1);
        r = "1 ";
        if(s[0]<=s[n-1]){
            for(int i=s[0]-'a'; i<=s[n-1]-'a'; i++){
                for(int j=0; j<bk[i].size(); j++) r += to_string(bk[i][j]) + " ", c++;;
 
            }
        }else{
            for(int i=s[0]-'a'; i>=s[n-1]-'a'; i--){
                for(int j=0; j<bk[i].size(); j++) r += to_string(bk[i][j]) + " ",c++;;
 
            }
        }
        r += to_string(n) + " ";
        cout << d << " " << c << endl << r << '\n';
    }
}
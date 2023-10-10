// Problem: C. Divisibility by Eight
// Contest: Codeforces - Codeforces Round 306 (Div. 2)
// URL: https://codeforces.com/problemset/problem/550/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	vector<int> num;
	char c;
	bool cero=false,ocho=false;
	while(cin>>c)
	{
		if(c=='0')cero=true;
		if(c=='8')ocho=true;
		num.push_back(c-'0');
	}
	if(cero){
		cout<<"YES\n"<<0;
		return 0;
	}
	else if(ocho){
		cout<<"YES\n"<<8;
		return 0;
	}
	else{
		for(int i=0;i<num.size();i++)
		{
			for(int j=i+1;j<num.size();j++)
			{
				for(int k=j+1;k<num.size();k++)
				{
					int aux=num[i]*100+num[j]*10+num[k];
					int aux2=num[j]*10+num[k];
					int aux3=num[i]*10+num[k];
					int aux4=num[i]*10+num[j];
					//cout<<aux<<"\n";
					if(aux%8==0)
					{
						cout<<"YES\n"<<aux;
						return 0;
					}
					else if(aux2%8==0){
						cout<<"YES\n"<<aux2;
						return 0;
					}
					else if(aux3%8==0){
						cout<<"YES\n"<<aux3;
						return 0;
					}
					else if(aux4%8==0){
						cout<<"YES\n"<<aux4;
						return 0;
					}
				}
			}
		}
		cout<<"NO";
	}
	return 0;
}

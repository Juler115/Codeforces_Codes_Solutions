// Problem: A. Anton and Letters
// Contest: Codeforces - Codeforces Round #253 (Div. 2)
// URL: https://codeforces.com/problemset/problem/443/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	string datos;
	map<char,int>:: iterator i;
	map<char,int> dat;	
	getline(cin,datos);
	for(unsigned int i=1;i<datos.length()-1;i+=3) dat[datos[i]]++;
	cout<<dat.size();
	
	/*for(i=dat.begin();i!=dat.end();i++)
	{	
		cout<<i->first<<"\n";
	}
	*/
	return 0;
}

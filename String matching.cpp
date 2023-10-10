#include <bits/stdc++.h>

using namespace std;

long long M=10e9+271;
long long B=29;
vector<long long> hashes;

long long powr(long long a,long long  b)
	{
		long long res=1;
		while(b){
			if(b&1) res *=a;
			a*=a;
			a%=M;
			b/=2;
			res%=M;
		}
		return res;
	}



int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	string n,m;
	cin>>n>>m;
	long long busca=0;
	long long apariciones=0;
	hashes.push_back(0);
	for(unsigned int i=0;i<m.size();i++)
	{
		busca=((busca*B)+(m[i]))%M;
	}
	for(unsigned int i=0;i<n.size();i++)
	{
		hashes.push_back(((hashes[i]*B)+(n[i]))%M);
	}
	for(unsigned int i=m.size();i<=n.size();i++)
	{
		long long buscando=(hashes[i-m.size()]*powr(B,m.size()));
		buscando%=M;
		if((((hashes[i]-buscando)+M)%M)==busca) apariciones++;
		//cout<<i<<": ";
		//cout<<busca<<"=="<<(((hashes[i]-buscando)+M)%M)<<"\n";
	}
	//for(long a:hashes) cout<<a<<"\n";
	cout<<apariciones<<"\n";
	//cout<<busca<<"=="<<hashes[5]-hashes[3]<<"\n";
	
	return 0;
}

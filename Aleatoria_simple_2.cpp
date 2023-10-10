#include <bits/stdc++.h>
using namespace std;
#define int double
int n=30;

vector<int>xs(n);
vector<int>ans;
int mini=INT_MAX;

unsigned generateSeed(int iteration) {
    return static_cast<unsigned>(iteration * 12345); 
}

void solve(){
	static int iteration = 9;
    unsigned seed = generateSeed(iteration++);
    std::mt19937 gen(seed);
	for(int i=0;i<n;i++)xs[i]=rand()%2;
	//for(auto a:xs)cout<<a<<" ";
	//cout<<"\n";
	int aux=30;
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=xs[i];
	}
	aux-=sum;
	int multi=1;
	for(int i=1;i<n;i++){
		multi*=xs[i];
	}
	multi*=31;
	aux+=multi;
	
	if(aux<mini){
		mini=aux;
		ans=xs;
	}
	cout<<"Solucion minima con valores:\n";
	for(auto a:ans)cout<<a;
	cout<<"\n";
	cout<<"obtiene un valor minimo: "<<mini<<"\n\n";
	
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=10000;
	//cin>>t;
	while(t--)
		solve();
	
	return 0;
}

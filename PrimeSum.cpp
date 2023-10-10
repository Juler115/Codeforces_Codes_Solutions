#include <bits/stdc++.h>

using namespace std;

vector<bool> isPrime;
vector<int> primes;
void criba(int n) {
    isPrime = vector<bool>(n, true);
    primes = vector<int>();
    isPrime[0] = isPrime[1] = false;
    for (int i=2; i<n; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int h=2; h*i<n; ++h) isPrime[i*h] = 0;
        }
    }
}
bool esprimo(int n)
{
	int a=primes.size()+1;
	while(a--){
		if(n==primes[a])return true;
	}
	return false;
}


int countPrimes(int n){
	int pars=0;
    criba(n);
    for(int i=0;i<primes.size();i++)
    {
    	for(int j=i+1;j<primes.size();j++)
    	{
    		if(!esprimo(primes[i]+primes[j]))continue;
    		if(primes[i]+primes[j]<=n)
    		{
    			pars++;
    		}
    	}
    }
    return pars;
}


int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	cout<<countPrimes(7);
	
	return 0;
}

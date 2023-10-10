// Problem: B. Books
// Contest: Codeforces - Codeforces Round 171 (Div. 2)
// URL: https://codeforces.com/problemset/problem/279/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	//recive the n books and the time
	int n,t;
	vector<int> books;
	cin>>n>>t;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		books.push_back(x);
	}
	//iterate over all the books and get the acumulative sum
	//save the maximum books you can read
	int sum=0,maxi=0,boo=0,j=0;
	for(int i=0;i<n;i++)
	{
		while(sum+books[j]<=t && j<n)
		{
			sum+=books[j];
			boo++;
			j++;
		}
		//cout<<sum<<"\n";
		sum-=books[i];
		if(boo>maxi)maxi=boo;
		--boo;
	}
	cout<<maxi;
	
	return 0;
}
// Problem: C. Cypher
// Contest: Codeforces - Codeforces Round #806 (Div. 4)
// URL: https://codeforces.com/contest/1703/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    //recive the test cases
	int t=0;
	cin>>t;
	while(t--)
	{
		//recive the number of wheels
		int n;
		cin>>n;
		//create a vector for wheels
		vector<int>whe;
		//get the final numbers of the wheels
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			whe.pb(a);
			//cout<<whe[i];
		}
		//recive the movements of every wheel
		for(int i=0;i<n;i++)
		{
			int m;
			cin>>m;
			//recive the movements
			for(int j=0;j<m;j++)
			{
				//recive the instruction
				char c;
				cin>>c;
				//move the vector if its up 
				if(c=='U')
				{
					whe[i]--;
					if(whe[i]<0)whe[i]=9;
					//cout<<whe[i]<<" ";
				}//move the vector if its down.
				else{
					whe[i]++;
					if(whe[i]>9)whe[i]=0;
				}
			}
		}
		//print the result
		for(auto a:whe)
		{
			cout<<a<<" ";
		}
		cout<<"\n";
		
		
	}
	
	return 0;
}

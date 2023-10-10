// Problem: A. String Task
// Contest: Codeforces - Codeforces Beta Round #89 (Div. 2)
// URL: https://codeforces.com/problemset/problem/118/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string ori;
	cin>>ori;
	string nueva;
	
	std:: transform(ori.begin(), ori.end(), ori.begin(), ::tolower);
	
	for (int i = 0,s=ori.length(); i < s; i++)
{
    if (ori[i] != 'a' && ori[i] != 'e' && ori[i] != 'i' && ori[i] != 'o' && ori[i] != 'u' && ori[i] != 'y')
    {
    	nueva+=".";
        nueva += ori[i];
    }
}
	cout<<nueva;
	
	
	
	return 0;
}

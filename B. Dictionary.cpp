// Problem: B. Dictionary
// Contest: Codeforces - Codeforces Round #786 (Div. 3)
// URL: https://codeforces.com/contest/1674/problem/B
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
	int t=0;
	cin>>t;
	
	for(int z=0;z<t;z++)
	{
		string s;
		cin>>s;
		int suma;
		int indice;
		switch(s[0]-97)
		{
			case 0: indice=25*0;break;
			case 1: indice=25*1;break;
			case 2: indice=25*2;break;
			case 3: indice=25*3;break;
			case 4: indice=25*4;break;
			case 5: indice=25*5;break;
			case 6: indice=25*6;break;
			case 7: indice=25*7;break;
			case 8: indice=25*8;break;
			case 9: indice=25*9;break;
			case 10: indice=25*10;break;
			case 11: indice=25*11;break;
			case 12: indice=25*12;break;
			case 13: indice=25*13;break;
			case 14: indice=25*14;break;
			case 15: indice=25*15;break;
			case 16: indice=25*16;break;
			case 17: indice=25*17;break;
			case 18: indice=25*18;break;
			case 19: indice=25*19;break;
			case 20: indice=25*20;break;
			case 21: indice=25*21;break;
			case 22: indice=25*22;break;
			case 23: indice=25*23;break;
			case 24: indice=25*24;break;
			case 25: indice=25*25;break;	
		}
		if(s[1]>s[0]) suma=s[1]-97;
		else suma=s[1]-96;
		indice+=suma;
		cout<<indice;


		cout<<"\n";
	}
	return 0;
}
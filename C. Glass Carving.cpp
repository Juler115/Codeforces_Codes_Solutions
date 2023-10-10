// Problem: C. Glass Carving
// Contest: Codeforces - Codeforces Round 296 (Div. 2)
// URL: https://codeforces.com/problemset/problem/527/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std; 
#define int long long int
 
 
int W,H,N,num;
char ch;
multiset<int> maxHorSize,maxVertSize;
set<int> horiz,vert;
int max_area;
 
void find_max(set<int>&setCut, char cut)
{
    auto med=setCut.find(num);
    auto big=med;
    auto sml=med;
    ++big; --sml;
    if(cut=='h')
    {
        maxHorSize.erase(maxHorSize.find(*big-*sml));
        maxHorSize.insert(*med-*sml);
        maxHorSize.insert(*big-*med);
    }
    else if(cut=='v')
    {
        maxVertSize.erase(maxVertSize.find(*big-*sml));
        maxVertSize.insert(*med-*sml);
        maxVertSize.insert(*big-*med);
    }
    max_area= (int)(*maxHorSize.rbegin()) * (int)(*maxVertSize.rbegin());
}
 
 
 
int32_t main()
{
    cin>>W>>H>>N;
    horiz = {0,H};
    vert = {0,W};
    maxHorSize = {H};
    maxVertSize = {W};
    
    for(int i=0;i<N;i++)
    {
        cin>>ch>>num;
        if(ch=='H')
        {
            horiz.insert(num);
            find_max(horiz, 'h');
        }
        else if(ch=='V')
        {
            vert.insert(num);
            find_max(vert, 'v');
        }
        cout<<max_area<<"\n";
    }
 
    return 0;
}
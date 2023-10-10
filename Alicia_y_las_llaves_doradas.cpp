#include <bits/stdc++.h>

using namespace std;

int binary(long long arr[],long long n,int m)
{
	int max=m;
	int min= 0;
	int med=(max+min)/2;
	
	while (min<max)
	{
		if(arr[med]==n && n==1)return med;
		if(arr[med]==n)return med+1;
		else if(arr[med]>n)
		{
			max=med;
			med=(max+min)/2;
		}
		else if(arr[med]<n)
		{
			min=med+1;
			med=(max+min)/2;
		}
	}
	return -1;
	
}



int main()
{
	int n=110;
	long long p[n];
	long long res, a = 0, b = 1;
    for (int i = 1; i <= n; i++){
        res = a + b;
        p[i]=res;
        a = b;
        b = res;
    }
    
	long long l;
	cin>>l;
	
		cout<<binary(p,l,n)<<" ";
	
	
	return 0;
}

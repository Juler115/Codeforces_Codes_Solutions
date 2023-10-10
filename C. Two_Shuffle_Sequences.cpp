// Problem: C. Two Shuffled Sequences
// Contest: Codeforces - Codeforces Round #550 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1144/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

void quicksort(long long A[],long long izq, long long der )
{ 
long long i, j, x , aux; 
i = izq; 
j = der; 
x = A[ (izq + der) /2 ]; 
    do{ 
        while( (A[i] < x) && (j <= der) )
        { 
            i++;
        } 
 
        while( (x < A[j]) && (j > izq) )
        { 
            j--;
        } 
 
        if( i <= j )
        { 
            aux = A[i]; A[i] = A[j]; A[j] = aux; 
            i++;  j--; 
        }
         
    }while( i <= j ); 
 
    if( izq < j ) 
        quicksort( A, izq, j ); 
    if( i < der ) 
        quicksort( A, i, der ); 
}

int main()
{
	long long n;
	cin>>n;
	long long a[n+2];
	for(int i=0;i<n;i++) cin>>a[i];
	a[n]=-1;
	a[n+1]=-1;
	
	long long s=0,h=0;
	long long b[n];
	long long f[n];
	int valido=1;
	quicksort(a,0,n-1);
	

		
	for(int i=0;i<n;i++)
	{
		if(a[i]==a[i+1] && a[i]==a[i+2]) 
		{
			cout<<"NO"; valido=0;
			break;	
		}
		else if(a[i]==a[i+1])
		{
			b[s]=a[i+1];
			f[h]=a[i];
			i++;
			s++;
			h++;
		}	
		else 
		{
			f[h]=a[i];
			h++;
		}
	} 
	if(valido==1)
		{
			
			cout<<"YES"<<"\n";
			cout<<s<<"\n";
			for(int i=0;i<s;i++) cout<<b[i]<<" ";
			cout<<"\n";
			cout<<h<<"\n";
			for(int i=h-1;i>=0;i--) 
			{	
				cout<<f[i]<<" ";
				
			}
		}
	
	
	return 0;
}

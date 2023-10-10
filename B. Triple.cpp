// Problem: B. Triple
// Contest: Codeforces - Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
  
    int L[n1], R[n2];
  
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
  
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
  
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
  
        merge(arr, l, m, r);
    }
}

int main()
{
	int t=0;
	cin>>t;
	for(int a=0;a<t;a++)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];	
		int actual=0,este=0;
		mergeSort(arr,0,n-1);
		
		actual=arr[0];
		for(int i=0;i<n;i++)
		{
			if(arr[i]==actual)este++;
			else 
			{
				actual=arr[i];
				este=1;	
			}
			if(este>=3)
			{
				cout<<actual<<"\n";
				break;
			}
		}	
		if(este<3)
			{
				cout<<-1<<"\n";
			}
	}
	return 0;
}



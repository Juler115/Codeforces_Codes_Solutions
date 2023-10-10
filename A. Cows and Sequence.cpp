#include<bits/stdc++.h>
using namespace std;
int arr[2000005];
long long brr[2000005];
int main(){
	double ans=0.0;int n,query,a,b,k=1;
	long long res=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&query);
		if(query==2){
			scanf("%d",&arr[++k]);res+=arr[k];
		}else if(query==1){
			scanf("%d%d",&a,&b);brr[a]+=b;
			res+=a*b;
		}else {
			res-=arr[k];res-=brr[k];
			brr[k-1]+=brr[k];brr[k]=0;k--;
		}
		ans=res*1.0/k;
		printf("%.10lf\n",ans);
	}
	return 0;
}
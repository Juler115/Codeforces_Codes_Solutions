// iostream is too mainstream
#include <cstdio>
// bitch please
#include <iostream>
#include <vector>
#include <set>
#include <tr1/unordered_map>
#include <string>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>
#define dibs reserve
#define OVER9000 234567890
#define tisic 47
#define soclose 10e-7
#define ALL_THE(CAKE,LIE) for(auto LIE =CAKE.begin(); LIE != CAKE.end(); LIE++)
#define chocolate win
#define ff first
#define ss second
#define uint unsigned int
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> V(N);
	for(int i =0; i < N; i++) cin >> V[i];
	
	stack< pair<int,int> > S; // v ktorom tahu zije
	int ans =0;
	S.push(make_pair(V[0],N));
	for(int i =1; i < N; i++) {
		int a =0;
		while(!S.empty()) {
			if(S.top().first < V[i]) {
				a =S.top().second+1;
				S.pop();
				continue;}
			ans =max(ans,a+1);
			while(!S.empty()) {
				if(S.top().second != a) break;
				S.pop();}
			S.push(make_pair(V[i],a));
			break;}
		if(S.empty()) S.push(make_pair(V[i],N));}
	cout << ans << "\n";


return 0;}

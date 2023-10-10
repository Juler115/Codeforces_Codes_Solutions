// Problem: D. Mr. Kitayuta's Colorful Graph
// Contest: Codeforces - UP-Practica2-EDAIII
// URL: https://codeforces.com/gym/433226/problem/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
 
vector<vector<pi> > graph;
vector<int> gra;
int total=0;
 
// Function for adding edges to graph
void addedge(int x, int y, int cost)
{
    graph[x].push_back(make_pair(cost, y));
    graph[y].push_back(make_pair(cost, x));
}
 
// Function For Implementing Best First Search
// Gives output path having lowest cost
void best_first_search(int actual_Src, int target, int n)
{
    vector<bool> visited(n, false);
    // MIN HEAP priority queue
    priority_queue<pi, vector<pi>, greater<pi> > pq;
    // sorting in pq gets done by first value of pair
    pq.push(make_pair(0, actual_Src));
    int s = actual_Src;
    visited[s] = true;
    while (!pq.empty()) {
        int x = pq.top().second;
        // Displaying the path having lowest cost
        //cout << x << " ";
        total++;
        pq.pop();
        if (x == target)
            break;
 
        for (int i = 0; i < graph[x].size(); i++) {
            if (!visited[graph[x][i].second]) {
                visited[graph[x][i].second] = true;
                pq.push(make_pair(graph[x][i].first,graph[x][i].second));
            }
        }
    }
}

int main(){
	
	int n,m;
	cin>>n>>m;
	graph.resize(m);
	for(int i=0;i<m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		addedge(a,b,c);
	}
	int q;
	cin>>q;
	while(q--){
		total=0;
		int u,v;
		cin>>u>>v;
		best_first_search(u,v,n);
		cout<<total<<"\n";
	}
	
	return 0;
}
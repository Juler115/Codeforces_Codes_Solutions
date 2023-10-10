#include <bits/stdc++.h>

using namespace std;
#define pb push_back


int ladderLength(string beginWord, string endWord, vector<string> wordList) {
    
    wordList.pb(beginWord);
    unordered_map<string,vector<string>> adj;
    unordered_map<string,int> dist;

    queue<string> bfs;
    unordered_map<string,bool> vis;
    for(auto i:wordList)dist[i]=0;
    for(int i=0;i<wordList.size();i++)
    {
    	for(int j=0;j<wordList.size();j++)
    	{
    		if(j==i)continue;
    		int dif=0;
    		for(int k=0;k<wordList[0].size();k++)
    		{
    			if(wordList[i][k]!=wordList[j][k])dif++;
    		}
    		if(dif<=1){
    			adj[wordList[i]].pb(wordList[j]);
    			adj[wordList[j]].pb(wordList[i]);
    		}
    	}
    }
    	
    dist[beginWord]=0;
    bfs.push(beginWord);
    vis[beginWord]=1;
    while(!bfs.empty()){
			string f = bfs.front();
			bfs.pop();
			for(auto nbr : adj[f]){
				if(!vis[nbr]){
					bfs.push(nbr);
					dist[nbr] = dist[f] + 1;
					vis[nbr] = true;
				}
			}
		}
	if(dist[endWord]==-1)return 0;
	else return dist[endWord]+1;
}



int main(){
	
	vector<string> wordlist={"cog"};
	cout<<ladderLength("cag","cag",wordlist);
	
	return 0;
}
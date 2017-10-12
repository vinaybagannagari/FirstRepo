#include<iostream>
#include<vector>
#include<utility>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;

vvi adjList;
bool dfs_visted[1000];

void dfs(int u)
{
    dfs_visted[u] = true;
    cout<<u<<" ";
    for(int i = 0; i < adjList[u].size(); ++i)
        if(!dfs_visted[adjList[u][i]])
            dfs(adjList[u][i]);
}

int main()
{
    int V; cin>>V;
    adjList.resize(V);
    for(int i = 0; i < V; ++i)
    {
        int adjSz, temp; cin>>adjSz;
        for(int j = 0; j < adjSz; ++j)
        {
            cin>>temp; adjList[i].push_back(temp);
        }
    }
    dfs(0);
}

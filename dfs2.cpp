#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int>g[N];

bool vis[N];

void dfs(int node)
{
    //take action on node after entering the node
    cout<<node<<endl;
    vis[node] = true;
    //if(vis[node]) return;
    for(int child : g[node])
    {
        cout<<"parent "<<node<<", child "<<child<<endl;
        if(vis[child]) continue;
        //take action on child before entering the child node
        dfs(child);
        //take action on child after exiting the child node

    }
    //take action on vertex before exiting the vertex
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1);
}
/*
6 9
1 3
1 5
3 5
3 4
3 6
3 2
2 6
4 6
5 6
*/

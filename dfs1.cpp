#include<bits/stdc++.h>
#define white 1
#define gray 2
#define black 3

using namespace std;

int adj[100][100];
int color[100];
int edge;
int node;

void dfsvisit(int x)
{
   color[x]=gray;
   for(int i=0;i<node;++i)
   {
       if(adj[x][i]==1){
        if(color[i]==white){
            dfsvisit(i);
        }
       }
   }
}

void dfs()
{
    for(int i=0;i<node;++i)
    {
        color[i]=white;
    }
    for(int i=0;i<node;++i)
    {
        if(color[i]==white)
        {
            dfsvisit(i);
        }
    }
}

int main()
{
    freopen("input","r",stdin);
    scanf("%d%d",&node,&edge);
    int n1,n2;
    for(int i=0;i<edge;i++)
    {
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }
}

#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define MAX 10000
vector<int>edges[MAX];
//vector<int>cost[MAX];
int main()
{
    int numNodes,numEdges;
    scanf("%d%d",&numNodes,&numEdges);
    for(int i=0;i<numEdges;i++){
        int n1,n2;
        scanf("%d%d",&n1,&n2);
        edges[n1].push_back(n2);
        edges[n2].push_back(n1);

    }
    for(int i=0;i<numNodes;i++){
        for(int j=0;j<edges[i].size();j++){
            printf("%d ",edges[i][j]);
        }
        printf("\n");
    }
    //int s=edges[1].size();
    //for(int i=0;i<s;i++){
      //  printf("%d ",edges[1][i]);
}

/*6 8
1 2
1 4
2 4
2 5
4 5
5 3
3 6
6 6*/

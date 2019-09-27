/*
Used Technique: DFS

Explanation: 
Assume every person is a node if a graph. Give bidirectional edge between all the persons who believe in same religion.
The number of connected component of the graph is the answer. we can find it by using DFS.
*/

#include <stdio.h>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int n, m, i, a, b, cnt, tc = 1;
vector<int>v[50100];
bool f[50100];

void dfs(int i)
{
    f[i] = 1;
    for(auto a: v[i]){
        if(f[a] == 0)
            dfs(a);
    }
}
int main()
{
    while(1){
    scanf("%d %d", &n, &m);
        if(!n && !m)
            return 0;

        for(i = 0; i < m; i++){
            scanf("%d %d", &a, &b);
            v[a].push_back(b);
            v[b].push_back(a);
        }
        memset(f, 0, sizeof(f));
        cnt = 0;
        for(i = 1; i <= n; i++){
            if(f[i] == 0){
                cnt++;
                dfs(i);
            }
        }
        printf("Case %d: %d\n", tc++, cnt);
        for(i = 1; i <= n; i++)
            v[i].clear();
    }
}

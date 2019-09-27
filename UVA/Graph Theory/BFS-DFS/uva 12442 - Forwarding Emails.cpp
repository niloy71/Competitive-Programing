/*
Used Technique: DFS

Explanation:
Assume every Martians is a node in a graph. Give unidirectional edge between u and v if u forward mail to v.
For every non-visited node find the number of nodes you can traverse from that node using DFS. Remember to check for the cycle.
The node from which you can traverse the maximum number of nodes is the answer.

*/

#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

int t, n, a, b, i, ans, mx, cnt[50100], adj[50100], mark;
bool f[50100];

int dfs(int i)
{
    f[i] = 1;
    int a = 0;
    if(adj[i] != 0 && f[adj[i]] == 0){
        a = dfs(adj[i]);
    }
    f[i] = 0;
    return cnt[i] = a+1;
}

int main()
{
    scanf("%d", &t);

    for(int tc = 1; tc <= t; tc++){

        memset(cnt, 0, sizeof(cnt));
        memset(adj, 0, sizeof(adj));

        scanf("%d", &n);

        for(i = 0; i < n; i++){
            scanf("%d %d", &a, &b);
            adj[a] = b;
        }
        mx = -1;
        for(i = 1; i <= n; i++){
            if(cnt[i] == 0 && adj[i] != 0){
                f[i] = 1;
                cnt[i] = dfs(adj[i]);
                f[i] = 0;
            }
            if(cnt[i] > mx){
                mx = cnt[i];
                ans = i;
            }
        }
        printf("Case %d: %d\n", tc, ans);

    }
}

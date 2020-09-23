#include <bits/stdc++.h>

using namespace std;

int a, b, ara[15][2], f[15], n, t, ans;

void rec(int cnt, int num, int x, int y)
{
    if(num == n){
        cnt += abs(x-a)+abs(y-b);
        if(cnt < ans){
            ans = cnt;
        }
        return;
    }

    for(int i = 0; i < n; i++){
        if(f[i] == 0){
            f[i] = 1;
            rec(cnt+abs(x-ara[i][0])+abs(y-ara[i][1]), num+1, ara[i][0], ara[i][1]);
            f[i] = 0;
        }
    }
}

int main()
{
    int i;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &a, &b);
        scanf("%d %d", &a, &b);
        scanf("%d", &n);
        for(i = 0; i < n; i++){
            scanf("%d %d", &ara[i][0], &ara[i][1]);
        }
        ans = INT_MAX;
        memset(f, 0, sizeof(f));
        for(i = 0; i < n; i++){
            f[i] = 1;
            rec(abs(a-ara[i][0])+abs(b-ara[i][1]), 1, ara[i][0], ara[i][1]);
            f[i] = 0;
        }
        printf("The shortest path has length %d\n", ans);
    }
}

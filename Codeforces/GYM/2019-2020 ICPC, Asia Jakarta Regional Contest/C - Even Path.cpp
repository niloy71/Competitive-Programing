#include <bits/stdc++.h>

using namespace std;

int ara1[1000010], ara2[1000010], ara3[1000010], ara4[1000010], n, m;

int main()
{
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++){
        scanf("%d", &ara1[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &ara2[i]);
    }
    int cnt = 1;
    ara3[0] = cnt;
    for(int i = 1; i < n; i++){
        if(ara1[i]%2 != ara1[i-1]%2){
            cnt++;
        }
        ara3[i] = cnt;
    }
    cnt = 1;
    ara4[0] = cnt;
    for(int i = 1; i < n; i++){
        if(ara2[i]%2 != ara2[i-1]%2){
            cnt++;
        }
        ara4[i] = cnt;
    }
    int a, b, c, d;
    while(m--){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(ara3[a-1] == ara3[c-1] && ara4[b-1] == ara4[d-1]){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}

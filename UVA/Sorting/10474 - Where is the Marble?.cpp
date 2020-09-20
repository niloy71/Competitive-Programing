#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, tc = 1, a, i, ara[10100];
    while(scanf("%d %d", &n, &m)){
        if(!n && !m){
            return 0;
        }
        for(i = 0; i < n; i++)
            scanf("%d", &ara[i]);

        sort(ara, ara+n);

        printf("CASE# %d:\n", tc++);

        while(m--){
            scanf("%d", &a);

            for(i = 0; i < n; i++){
                if(ara[i] == a){
                    printf("%d found at %d\n", a, i+1);
                    break;
                }
            }
            if(i == n){
                printf("%d not found\n", a);
            }
        }
    }
    return 0;
}


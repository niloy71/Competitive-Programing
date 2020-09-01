#include <stdio.h>

int main()
{
    int t, n, tc, i, cnt, a;
    scanf("%d", &t);

    for(tc = 1; tc <= t; tc++){
        scanf("%d", &n);

        cnt = 1;
        for(i = 1; i <= n; i++){
            scanf("%d", &a);
            if(a == cnt)
                cnt++;
        }
        printf("Case %d: %d\n", tc, n-cnt+1);
    }
}


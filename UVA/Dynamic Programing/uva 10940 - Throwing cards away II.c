#include <stdio.h>

int n, i, cnt, dp[500010];

int main()
{
    dp[1] = 1;
    dp[2] = 2;
    cnt = 2;
    for(i = 3; i <= 500000; i++){
        if(cnt > i)
            cnt = 2;
        dp[i] = cnt;
        cnt += 2;
    }
    while(1){
        scanf("%d", &n);
        if(n == 0)
            return 0;

        printf("%d\n", dp[n]);
    }
    return 0;
}


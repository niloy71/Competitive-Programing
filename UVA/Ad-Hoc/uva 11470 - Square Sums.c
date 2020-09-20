#include <stdio.h>

int main()
{
    int n, ara[15][15], tc = 1, i, j, k, cnt;

    while(scanf("%d", &n)){
        if(!n)
            return 0;

        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                scanf("%d", &ara[i][j]);
            }
        }
        printf("Case %d:", tc++);
        k = 0;
        while(k*2<n){
            cnt = 0;
            for(i = k; i < n-k; i++){
                cnt += ara[k][i];
                if(k != n-1-k)
                    cnt += ara[n-1-k][i];
            }
            for(i = k+1; i < n-k-1; i++){
                cnt += ara[i][k];
                if(k != n-1-k)
                    cnt += ara[i][n-1-k];
            }
            printf(" %d", cnt);
            k++;
        }
        printf("\n");

    }
}

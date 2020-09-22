#include <stdio.h>

int main()
{
    int t, n, tc = 1, i, ans, a;
    scanf("%d", &t);
    while(t--){
        ans = 0;
        scanf("%d", &n);
        for(i = 0; i < n; i++){
            scanf("%d", &a);
            if(a > ans)
                ans = a;
        }
        printf("Case %d: %d\n", tc++, ans);

    }

    return 0;
}

#include <stdio.h>

int main()
{
    int n, tc = 1, i, cnt, a;
    scanf("%d", &n);
    while(n--){
        cnt = 0;
        for(i = 0; i < 13; i++){
            scanf("%d", &a);
            if(a == 0)
                cnt++;
        }
        if(cnt)
            printf("Set #%d: No\n", tc++);
        else
            printf("Set #%d: Yes\n", tc++);
    }

    return 0;
}

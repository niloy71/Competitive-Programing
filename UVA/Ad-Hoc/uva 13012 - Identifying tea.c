#include <stdio.h>

int main()
{
    int n, i, cnt, ara[5];

    while(1 == scanf("%d", &n)){
        for(i = 0; i < 5; i++){
            scanf("%d", &ara[i]);
        }
        cnt = 0;
        for(i = 0; i < 5; i++){
            if(ara[i] == n)
                cnt++;
        }
        printf("%d\n", cnt);
    }

    return 0;
}

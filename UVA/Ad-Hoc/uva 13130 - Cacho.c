#include <stdio.h>

int main()
{
    int n, i, f, ara[5];
    scanf("%d", &n);
    while(n--){
        f = 0;
        scanf("%d", &ara[0]);
        for(i = 1; i < 5; i++){
            scanf("%d", &ara[i]);
            if(ara[i]-1 != ara[i-1])
                f = 1;
        }
        if(f)
            printf("N\n");
        else
            printf("Y\n");
    }

    return 0;
}

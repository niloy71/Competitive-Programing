#include <stdio.h>

int main()
{
    int t, n, tc = 1, i, a, b, cnt1, cnt2;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        cnt1 = cnt2 = 0;
        for(i = 0; i < n; i++){
            scanf("%d", &a);
            a++;
            b = a/60;
            if(a%60) b++;
            cnt1 += b*15;
            b = a/30;
            if(a%30) b++;
            cnt2 += b*10;
        }
        if(cnt1 < cnt2)
            printf("Case %d: Juice %d\n", tc++, cnt1);

        else if(cnt1 > cnt2)
            printf("Case %d: Mile %d\n", tc++, cnt2);

        else
            printf("Case %d: Mile Juice %d\n", tc++, cnt1);
    }

    return 0;
}


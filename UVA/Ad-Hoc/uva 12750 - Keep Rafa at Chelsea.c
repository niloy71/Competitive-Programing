#include <stdio.h>

int main()
{
    int t, n, tc = 1, i, cnt, ans;
    char ch;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        cnt = ans = 0;
        for(i = 0; i < n; i++){
            getchar();
            scanf("%c", &ch);

            if(ch != 'W')
                cnt++;
            else
                cnt = 0;
            if(cnt == 3 && ans == 0){
                ans = i+1;
            }
        }
        if(ans == 0)
            printf("Case %d: Yay! Mighty Rafa persists!\n", tc++);
        else
            printf("Case %d: %d\n", tc++, ans);
    }

    return 0;
}


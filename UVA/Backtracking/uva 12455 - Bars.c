/*
Use backtracking to generate all possible combination of bars and check if the sum of any combination is equel to the
length of the bar we want to obtain.
*/

#include <stdio.h>

int t, n, p, f, i, ara[25];

void rec(int pos, int cnt)
{
    if(f)
        return;
    if(cnt == n){
        printf("YES\n");
        f = 1;
        return;
    }
    if(pos == p)
        return;

    rec(pos+1, cnt+ara[pos]);
    rec(pos+1, cnt);
}

int main()
{
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        scanf("%d", &p);

        for(i = 0; i < p; i++){
            scanf("%d", &ara[i]);
        }
        f = 0;
        rec(0, 0);
        if(!f)
            printf("NO\n");
    }
}

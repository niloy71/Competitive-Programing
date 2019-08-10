/*
Sum up the point gained by each player.
Then check who gain more point. The player who get highest point is winner.
If more then one player gain highest point the winner is the player who played last.
*/

#include <stdio.h>

int main()
{
    int n, cnt, m, mx, a, i, j, ara[250100];

    while(2 == scanf("%d %d", &n, &m)){
        m *= n;
        for(i = 0; i < m; i++){
            scanf("%d", &ara[i]);
        }
        mx = 0;
        for(i = 0; i < n; i++){
            cnt = 0;
            for(j = i; j < m; j += n){
                cnt += ara[j];
            }
            if(cnt >= mx){
                mx = cnt;
                a = i;
            }
        }
        printf("%d\n", a+1);
    }
}

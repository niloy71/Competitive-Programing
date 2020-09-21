#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, n, m, a, b, c, d, x, y;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &n, &m);
        while(n--){
            scanf("%d %d %d %d", &a, &b,&c, &d);
            x = a+b;
            y = c+d;

            if((a+b)%2 != (c+d)%2){
                printf("no move\n");
                continue;
            }
            x = abs(a-c);
            y = abs(b-d);
            if(a == c && b == d)
                printf("0\n");
            else if(x == y)
                printf("1\n");
            else
                printf("2\n");

        }

    }

    return 0;
}

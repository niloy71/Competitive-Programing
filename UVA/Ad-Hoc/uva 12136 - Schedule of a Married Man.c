#include <stdio.h>

int le(int a, int b,  int c, int d)
{
    if(a < c){
        return 1;
    }
    else if(a == c){
        if(b <= d){
            return 1;
        }
    }
    return 0;
}
int ge(int a, int b,  int c, int d)
{
    if(a > c){
        return 1;
    }
    else if(a == c){
        if(b >= d){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int t, tc = 1, a, b, c, d, a1, b1, c1, d1;
    char ch;
    scanf("%d", &t);
    while(t--){
        scanf("%d%c%d %d%c%d", &a, &ch, &b, &c, &ch, &d);
        scanf("%d%c%d %d%c%d", &a1, &ch, &b1, &c1, &ch, &d1);

        if(le(a, b, a1, b1) && ge(c, d, a1, b1)){
            printf("Case %d: Mrs Meeting\n", tc++);
            continue;
        }
        if(le(a, b, c1, d1) && ge(c, d, c1, d1)){
            printf("Case %d: Mrs Meeting\n", tc++);
            continue;
        }
        if(ge(a, b, a1, b1) && le(c, d, c1, d1)){
            printf("Case %d: Mrs Meeting\n", tc++);
            continue;
        }
        printf("Case %d: Hits Meeting\n", tc++);
    }
    return 0;
}


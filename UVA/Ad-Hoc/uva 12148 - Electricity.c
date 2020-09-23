#include <stdio.h>

int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


int leap_year(int a)
{
    if(a % 4 == 0 && !(a % 100 == 0 && a % 400 != 0)){
        return 1;
    }
    return 0;
}

int next_date(int a, int b,  int c, int a1, int b1, int c1)
{
    int x = 0;
    if(a+1 == a1 && b == b1 && c == c1){
        return 1;
    }
    if(leap_year(c) && b == 2){
        x = 1;
    }
    a -= x;
    if(b+1 == b1 && a1 == 1 && month[b1-2] == a && c == c1){
        return 1;
    }
    a += x;
    if(c+1 == c1 && b == 12 && b1 == 1 && a == 31 && a1 == 1){
        return 1;
    }
    return 0;
}

int main()
{
    int n, a, b, c, d, a1, b1, c1, d1, cnt, x;
    char ch;

    while(scanf("%d", &n)){
        if(!n)
            return 0;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        cnt = 0;
        x  = 0;
        while(--n){
            scanf("%d %d %d %d", &a1, &b1, &c1, &d1);
            if(next_date(a, b, c, a1, b1, c1)){
                x++;
                cnt += (d1-d);
            }
            a = a1;
            b = b1;
            c = c1;
            d = d1;
        }
        printf("%d %d\n", x, cnt);
    }
    return 0;
}


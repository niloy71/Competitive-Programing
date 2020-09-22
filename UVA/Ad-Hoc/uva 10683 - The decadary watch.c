#include <stdio.h>

int main()
{
    long long int n, i, a, ans, ara[4] = {1, 100, 100*60, 100*60*60};
    double cnt, b;
    while(1 == scanf("%lld", &n)){
        i = b = 0;
        while(n){
            a = n % 100;
            b += a*ara[i++];
            n /= 100;
        }
        cnt = b/8640000;
        ans = cnt*10000000+.005;
        i = 0;
        a = ans;
        while(a){
            a /= 10;
            i++;
        }
        for( ; i < 7; i++)
            printf("0");
        printf("%lld\n", ans);
    }

    return 0;
}


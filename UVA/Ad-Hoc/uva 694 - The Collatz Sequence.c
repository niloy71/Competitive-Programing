#include <stdio.h>

int main()
{
    long long int a, n, l, cnt, tc = 1;

    while(scanf("%lld %lld", &n, &l)){
        if(n < 0 && l < 0)
            return 0;

        cnt = 1;
        a = n;
        while(n != 1){
            if(n % 2 == 0){
                n /= 2;
            }
            else{
                n = n*3 + 1;
            }
            if(n > l)
                break;
            cnt++;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n", tc++, a, l, cnt);
    }
}

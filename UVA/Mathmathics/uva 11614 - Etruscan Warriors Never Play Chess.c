#include <stdio.h>
#include <math.h>

int main()
{
    long long int t, n, i, cnt;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld", &n);

        cnt = (-1+sqrt(1+4*2*n))/2;
        printf("%lld\n", cnt);
    }

    return 0;
}


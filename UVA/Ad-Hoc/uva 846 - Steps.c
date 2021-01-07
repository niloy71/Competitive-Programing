#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long t, a, b, dif, step, steplen, curr;

    scanf("%lld", &t);

    while(t--){
        scanf("%lld %lld", &a, &b);
        dif = abs(a-b);
        step = 0;
        steplen = 1;
        curr = 0;

        while(curr < dif){
            curr += steplen;
            step++;
            if(curr >= dif)
                break;
            curr += steplen;
            step++;
            steplen++;
        }
        printf("%lld\n", step);
    }
    return 0;
}

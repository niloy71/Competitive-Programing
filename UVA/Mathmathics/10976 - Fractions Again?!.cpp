#include <bits/stdc++.h>

using namespace std;

int n, i, ara[10100], ara1[10100], cnt, lcm;

int main()
{
    while(1 == scanf("%d", &n)){
        cnt = 0;

        for(i = n+1; i <= n+n; i++){
            lcm = n*i/__gcd(n, i);
            if(lcm%((lcm/n) - (lcm/i)) == 0){
                ara[cnt] = lcm/((lcm/n) - (lcm/i));
                ara1[cnt] = i;
                cnt++;
            }
        }
        printf("%d\n", cnt);
        for(i = 0; i < cnt; i++){
            printf("1/%d = 1/%d + 1/%d\n", n, ara[i], ara1[i]);
        }
    }
    return 0;
}

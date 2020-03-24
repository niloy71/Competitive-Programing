#include <stdio.h>
#include <iostream>
#include <math.h>
#include <map>

using namespace std;

long long a, b, n, t, i, ara[50];

map<long long, long long>mp;

void prime_factorize(long long x, long long y)
{
    long long sq = sqrt(x);

    for(int i = 2; i <= sq; i++){
        while(x % i == 0){
            mp[i] += y;
            x /= i;
        }
        if(x == 1)
            return;
    }
    mp[x] += y;
}

int main()
{
    ara[0] = 0;
    ara[1] = 1;

    for(i = 2; i <= 40; i++){
        ara[i] = ara[i-1]+ara[i-2];
    }

    scanf("%lld", &t);

    while(t--){
        scanf("%lld %lld %lld", &n, &a, &b);
        mp.clear();
        prime_factorize(a, ara[n-1]);
        prime_factorize(b, ara[n]);

        for(auto a: mp){
            cout<<a.first<<" "<<a.second<<endl;
        }
        cout<<endl;

    }

}

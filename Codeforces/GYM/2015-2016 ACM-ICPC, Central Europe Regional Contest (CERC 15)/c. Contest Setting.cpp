#include <bits/stdc++.h>

using namespace std;

long long n, k, a, mod = 998244353, dp[1010][1010], ara[1010];

long long combination(long long n, long long r)
{
    dp[0][0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= r; j++){
            if(j == 0){
                dp[i][j] = 1;
                continue;
            }
            dp[i][j] = (dp[i-1][j-1]*ara[i])%mod;
            dp[i][j] = (dp[i][j]+dp[i-1][j])%mod;
        }
    }
    return dp[n][r];
}


int main()
{
    cin>>n>>k;
    map<long long, long long>mp;

    for(int i = 0; i < n; i++){
        cin>>a;
        mp[a]++;
    }
    int i = 1;
    for(auto a: mp){
        ara[i++] = a.second;
    }
    cout<<combination(mp.size(), k)<<endl;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k, a, mx = -1;
    cin>>n>>k;
    for(int i = 0; i < n; i++){
        cin>>a;
        mx = max(mx, a);
    }
    mx = mx*k;

    long long ans = mx/1000;

    if(mx%1000) ans++;

    cout<<ans<<endl;
}

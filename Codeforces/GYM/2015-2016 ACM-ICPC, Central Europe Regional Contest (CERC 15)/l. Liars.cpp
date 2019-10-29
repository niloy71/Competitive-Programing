#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, a, b;
    cin>>n;
    map<long long, long long>mp;

    for(int i = 0; i < n; i++){
        cin>>a>>b;
        for(int j = a; j <= b; j++){
            mp[j]++;
        }
    }
    int f = 1;
    for(int i = n; i >= 0; i--){
        if(i == mp[i]){
            f = 0;
            cout<<i<<endl;
            break;
        }
    }
    if(f)
        cout<<-1<<endl;
}

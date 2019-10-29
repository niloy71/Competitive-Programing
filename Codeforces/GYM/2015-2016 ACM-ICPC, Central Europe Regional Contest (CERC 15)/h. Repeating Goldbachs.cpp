#include <bits/stdc++.h>

using namespace std;

bool f[1000100];

int main()
{
    long long n;
    cin>>n;

    vector<long long>v;

    map<long long, long long>mp;
    for(int i = 2; i <= n; i++){
        if(f[i] == false){
            v.push_back(i);
            mp[i] = 1;
            for(int j = i+i; j <= n; j+=i){
                f[j] = true;
            }
        }
    }

    long long cnt = 0;
    while(n >= 4){
        for(int i = 0; i < v.size(); i++){
            if(mp[n-v[i]] == 1){
                if((n-v[i]*2)%2) continue;
                cnt++;
                n = n-v[i]*2;
                break;
            }
        }
    }
    cout<<cnt<<endl;
}

#include <bits/stdc++.h>

using namespace std;

map<string, int>mp;

int main()
{

    int n, m, a, i, cnt;
    string s;

    cin>>n>>m;
    for(i = 0; i < n; i++){
        cin>>s>>a;
        mp[s] = a;
    }
    cnt = 0;
    while(m--){

        while(cin>>s){
            if(s == "."){
                cout<<cnt<<endl;
                cnt = 0;
                break;
            }
            cnt += mp[s];
        }
    }
}

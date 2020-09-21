#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, i, cnt, a;
    string s[110];
    cin>>t;
    while(t--){
        cin>>n;
        cnt = 0;
        for(i = 1; i <= n; i++){
            cin>>s[i];
            if(s[i] == "SAME"){
                cin>>s[i]>>a;
                s[i] = s[a];

            }
            if(s[i] == "LEFT")
                cnt--;
            if(s[i] == "RIGHT")
                cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}

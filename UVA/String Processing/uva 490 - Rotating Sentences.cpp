#include <bits/stdc++.h>

using namespace std;

int main()
{
    string c, s[150], ss[150];
    int i = 0, mx = 0, j, k;
    while(getline(cin, s[i])){
        mx = max(mx, (int)s[i].size());
        i++;
    }
    for(j = i-1; j >= 0; j--){
        for(k = 0; k < s[j].size(); k++){
            ss[k].push_back(s[j][k]);
        }
        for( ; k < mx; k++){
            ss[k].push_back(' ');
        }
    }
    for(i = 0; i < mx; i++){
        cout<<ss[i]<<endl;
    }

    return 0;
}


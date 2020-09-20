#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, m, i;
    string s;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &n, &m);

        for(i = 0; i < n-m; i++)
            s.push_back('0');
        for(; i < n; i++)
            s.push_back('1');

        do{
            cout<<s<<endl;
        }while(next_permutation(s.begin(), s.end()));
        if(t)
            cout<<endl;
        s = "";
    }
    return 0;
}

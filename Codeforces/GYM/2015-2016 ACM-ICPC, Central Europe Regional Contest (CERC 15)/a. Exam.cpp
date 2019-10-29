#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, cnt = 0;
    string s1, s2;
    cin>>n;
    cin>>s1;
    cin>>s2;
    for(int  i = 0; i < s1.size(); i++){
        if(s1[i] == s2[i])
            cnt++;
    }
    long long ans = s1.size()-max(cnt, n);
    cnt = min(n, cnt);
    cout<<ans+cnt<<endl;

}

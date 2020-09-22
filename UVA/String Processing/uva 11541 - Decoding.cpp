#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int t, tc = 1, i, j, k, cnt;
    scanf("%d", &t);
    while(t--){
        cin>>s;
        printf("Case %d: ", tc++);
        for(i = 0 ; i < s.size(); i++){
            j = 1;
            k = 1;
            cnt = 0;
            while(isdigit(s[i+j])){
                cnt *= k;
                cnt += (s[i+j]-'0');
                j++;
                k *= 10;
            }
            for(k = 0; k < cnt; k++){
                printf("%c", s[i]);
            }
            i += j-1;
        }
        printf("\n");
    }
}

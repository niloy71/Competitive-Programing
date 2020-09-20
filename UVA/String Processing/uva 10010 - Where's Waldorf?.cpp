#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, ss[60];
    int t, n, m, i, j, k, x;
    scanf("%d", &t);

    while(t--){
        scanf("%d %d", &n, &m);

        for(i = 0; i < n; i++){
            cin>>ss[i];
            transform(ss[i].begin(), ss[i].end(), ss[i].begin(), ::tolower);
        }
        scanf("%d", &x);

        while(x--){
            cin>>s;
            transform(s.begin(), s.end(), s.begin(), ::tolower);

            for(i = 0; i < n; i++){
                for(j = 0; j < m; j++){
                    for(k  = 0; k < s.size() && i+k < n; k++){
                        if(ss[i+k][j] !=s[k])
                            break;
                    }
                    if(k == s.size()){
                        printf("%d %d\n", i+1, j+1);
                        goto f1;
                    }
                    for(k  = 0; k < s.size() && j+k < m; k++){
                        if(ss[i][j+k] !=s[k])
                            break;
                    }
                    if(k == s.size()){
                        printf("%d %d\n", i+1, j+1);
                        goto f1;
                    }
                    for(k  = 0; k < s.size() && i+k < n && j+k < m; k++){
                        if(ss[i+k][j+k] !=s[k])
                            break;
                    }
                    if(k == s.size()){
                        printf("%d %d\n", i+1, j+1);
                        goto f1;
                    }


                    for(k  = 0; k < s.size() && i-k >= 0&& j+k < m; k++){
                        if(ss[i-k][j+k] !=s[k])
                            break;
                    }
                    if(k == s.size()){
                        printf("%d %d\n", i+1, j+1);
                        goto f1;
                    }
                    for(k  = 0; k < s.size() && i-k >= 0; k++){
                        if(ss[i-k][j] !=s[k])
                            break;
                    }
                    if(k == s.size()){
                        printf("%d %d\n", i+1, j+1);
                        goto f1;
                    }
                    for(k  = 0; k < s.size() && i-k >= 0 && j-k >= 0; k++){
                        if(ss[i-k][j-k] !=s[k])
                            break;
                    }
                    if(k == s.size()){
                        printf("%d %d\n", i+1, j+1);
                        goto f1;
                    }
                    for(k  = 0; k < s.size() &&  j-k >= 0; k++){
                        if(ss[i][j-k] !=s[k])
                            break;
                    }
                    if(k == s.size()){
                        printf("%d %d\n", i+1, j+1);
                        goto f1;
                    }
                    for(k  = 0; k < s.size() && i < n && j-k >= 0; k++){
                        if(ss[i+k][j-k] !=s[k])
                            break;
                    }
                    if(k == s.size()){
                        printf("%d %d\n", i+1, j+1);
                        goto f1;
                    }
                }
            }
            f1:
                continue;
        }
        if(t)
            printf("\n");
    }

    return 0;
}

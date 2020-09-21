#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1[110], s2[110], ss1, ss2;
    int i, tc = 1, n, m, f;

    while(scanf("%d", &n)){
        if(n == 0)
            return 0;
        printf("Run #%d: ", tc++);
        getchar();
        for(i = 0; i < n; i++){
            getline(cin, s1[i]);
        }
        scanf("%d", &m);
        getchar();
        for(i = 0; i < m; i++){
            getline(cin, s2[i]);
        }

        ss1.clear();
        ss2.clear();
        f = 0;
        for(i = 0; i < n && i < m; i++){
            if(s1[i] != s2[i]){
                f = 1;
                for(auto a: s1[i]){
                    if(isdigit(a))
                        ss1.push_back(a);
                }
                for(auto a: s2[i]){
                    if(isdigit(a))
                        ss2.push_back(a);
                }
            }
        }
        if(n > m){
            f = 1;
            for(; i < n; i++){
                for(auto a: s1[i]){
                    if(isdigit(a))
                        ss1.push_back(a);
                }
            }
        }
        if(n < m){
            f = 1;
            for(; i < m; i++){
                for(auto a: s2[i]){
                    if(isdigit(a))
                        ss2.push_back(a);
                }
            }
        }
        if(f){
            if(ss1 == ss2)
                goto f3;
            else
                goto f2;
        }

        f1:
            printf("Accepted\n");
            continue;
        f2:
            printf("Wrong Answer\n");
            continue;
        f3:
            printf("Presentation Error\n");
            continue;

    }
    return 0;
}

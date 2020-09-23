#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, a, b, c, d, ans, x, y, time, tc = 1, ara[1100];
    char ch;
    string s;
    while(1 == scanf("%d", &n)){
        memset(ara, 0, sizeof(ara));
        for(i = 0; i < n; i++){
            scanf("%d%c%d %d%c%d", &a, &ch, &b, &c, &ch, &d);
            getline(cin, s);
            ara[a*60+b]++;
            ara[c*60+d]--;
        }
        a = 0;
        for(i = 10*60; i <= 1080; i++){
            a += ara[i];
            ara[i] = a;
        }

        a = 0;
        ans = 0;
        for(i = 10*60; i <= 1080; i++){
            if(ara[i]){
                if(a){
                    if(a > ans){
                        ans = a;
                        time = i-a;
                    }
                    a = 0;
                }
            }
            else{
                a++;
            }
        }
        if(a-1){
            if(a-1 > ans){
                ans = a-1;
                time = i-a;
            }
            a = 0;
        }

        x = time/60;
        y= time%60;
        a = ans/60;
        b = ans%60;
        printf("Day #%d: the longest nap starts at %d:", tc++, x);
        if(y < 10)
            printf("0");
        printf("%d and will last for ", y);
        if(a){
            printf("%d hours and ", a);
        }
        printf("%d minutes.\n", b);

    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int n, len, res, ds, ans, i;
    char c;
    while(scanf("%d", &n)){
        if(!n)
            return 0;
        getchar();

        ans = res = ds = INT_MAX;

        for(i = 0; i < n; i++){
            scanf("%c", &c);

            if(c == 'R'){
                res = i;
                if(abs(res-ds) < ans){
                    ans = abs(res-ds);
                }
            }
            else if(c == 'D'){
                ds = i;
                if(abs(res-ds) < ans){
                    ans = abs(res-ds);
                }
            }
            else if(c == 'Z'){
                ans = 0;
            }
        }
        printf("%d\n", ans);
    }
}

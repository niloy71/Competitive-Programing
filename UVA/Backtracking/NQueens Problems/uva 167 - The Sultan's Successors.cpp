#include <bits/stdc++.h>

using namespace std;

int Queens[8], ara[8][8], sum, ans;

bool placed(int k, int i)
{
    for(int j = 0; j < k; j++){
        if(Queens[j] == i || abs(j-k) == abs(Queens[j]-i)){
            return false;
        }
    }
    return true;
}

void nQueens(int k)
{
    for(int i = 0; i < 8; i++){
        if(placed(k,i)){
            Queens[k] = i;
            sum += ara[k][i];
            if(k == 7){
                ans = max(ans, sum);
            }
            else{
                nQueens(k+1);
            }
            sum -= ara[k][i];
        }
    }
}

int main()
{
    int t, i, j;

    scanf("%d", &t);

    while(t--){
        for(i = 0; i < 8; i++){
            for(j = 0; j < 8; j++){
                scanf("%d", &ara[i][j]);
            }
        }

        sum = ans = 0;
        nQueens(0);

        printf("%5d\n", ans);
    }
}

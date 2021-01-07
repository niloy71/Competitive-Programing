#include <bits/stdc++.h>

using namespace std;

int Queens[8], n = 8;

vector<vector<int>>v;


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
    for(int i = 0; i < n; i++){
        if(placed(k,i)){
            Queens[k] = i;
            if(k == n-1){
                vector<int>vect(Queens, Queens+8);
                v.push_back(vect);
            }
            else{
                nQueens(k+1);
            }
        }
    }
}

int main()
{
    int i, ans, cnt, tc = 1, ara[8];
    nQueens(0);
    while(1 == scanf("%d", &ara[0])){
        for(i = 1; i < 8; i++){
            scanf("%d ", &ara[i]);
        }
        ans = 10;

        for(auto a: v){
            cnt = 0;
            for(i = 0; i < 8; i++){
                if(ara[i] -1 != a[i])
                    cnt++;
            }
            ans = min(ans, cnt);
        }
        printf("Case %d: %d\n", tc++, ans);

    }
}

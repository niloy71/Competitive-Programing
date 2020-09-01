#include <bits/stdc++.h>

using namespace std;

int n, tc = 1;
bool prime[40] = {false};
bool f[40] = {false};
vector<int>v;
void rec(int a)
{
    if(v.size() == n-1){
        if(prime[v.back()+1] == 1){
            cout<<1;
            for(auto a: v){
                printf(" %d", a);
            }
            printf("\n");
        }
        return;
    }

    for(int i = 1; i <= n; i++){
        if(f[i] == 0 && prime[a+i] == 1){
            v.push_back(i);
            f[i] = 1;
            rec(i);
            v.pop_back();
            f[i] = 0;
        }
    }
}

int main()
{
    int j;
    for(int i = 1; i < 40; i++){
        j = 2;
        while(j < i){
            if(i % j == 0){
                break;
            }
            j++;
        }
        if(j >= i){
            prime[i] = 1;
        }
    }
    f[1] = 1;
    while(1 == scanf("%d", &n)){
        if(tc != 1)
            printf("\n");
        printf("Case %d:\n", tc++);
        if(n == 1){
            printf("1\n");
            continue;
        }
        rec(1);
    }
}

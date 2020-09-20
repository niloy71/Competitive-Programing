#include <bits/stdc++.h>

using namespace std;

int n, ara[20];
vector<int>v;
void rec(int i)
{
    if(v.size() == 6){
        printf("%d %d %d %d %d %d\n", v[0], v[1], v[2], v[3], v[4], v[5]);
        return;
    }

    for( ; i < n; i++){
        v.push_back(ara[i]);
        rec(i+1);
        v.pop_back();
    }
}

int main()
{
    int tc = 0;
    while(1){
        scanf("%d", &n);
        if(!n)
            return 0;
        if(tc++)
            printf("\n");


        for(int i = 0; i < n; i++){
            scanf("%d", &ara[i]);
        }
        rec(0);
    }
}

#include <bits/stdc++.h>

using namespace std;

int a, n, ara[25], i, ans;
vector<int>v, vans;
void rec(int j, int cnt)
{
    if(cnt > ans && cnt <= a){
        ans = cnt;
        vans = v;
    }

    for( ; j < n; j++){
        v.push_back(ara[j]);
        rec(j+1, cnt+ara[j]);
        v.pop_back();
    }
}

int main()
{
    while(1 == scanf("%d", &a)){
        scanf("%d", &n);
        for(i = 0; i < n; i++){
            scanf("%d", &ara[i]);
        }
        ans = 0;
        v.clear();
        vans.clear();
        rec(0, 0);

        for(auto a: vans){
            cout<<a<<" ";
        }
        cout<<"sum:"<<ans<<endl;
    }
    return 0;
}


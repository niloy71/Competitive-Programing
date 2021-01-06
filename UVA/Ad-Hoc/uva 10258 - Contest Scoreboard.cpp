#include <bits/stdc++.h>

using namespace std;

struct stk{
    int b, c;
    char ch;
};
struct stk1{
    int no, slv, plt;
};

bool comp(stk1 a, stk1 b){
    if(a.slv == b.slv){
        if(a.plt == b.plt){
            return a.no < b.no;
        }
        return a.plt < b.plt;
    }
    return a.slv > b.slv;
}

stk st;
stk1 st1;

int main()
{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    int a;
    map<int, vector<stk>>mp;
    map<int, int>cnt;
    vector<stk1>v;
    char s[1000];
    int tmp, t;
    scanf("%d", &t);
    getchar();
    getchar();
    while(t--){
        mp.clear();
        v.clear();
        while(gets(s)){
            if(s[0] == '\0')
                break;
            sscanf(s, "%d %d %d %c", &a, &st.b, &st.c, &st.ch);
            mp[a].push_back(st);
        }
        for(auto a: mp){
            cnt.clear();
            st1.no = a.first;
            st1.slv = st1.plt = 0;
            for(auto b: a.second){
                if(cnt[b.b] == INT_MAX)
                    continue;
                if(b.ch == 'C'){
                    cnt[b.b] += b.c;
                    st1.slv++;
                    st1.plt += cnt[b.b];
                    cnt[b.b] = INT_MAX;
                }
                if(b.ch == 'I'){
                    cnt[b.b] += 20;
                }
            }
            v.push_back(st1);
        }
        sort(v.begin(), v.end(), comp);
        for(auto a: v){
            cout<<a.no<<" "<<a.slv<<" "<<a.plt<<endl;
        }
        if(t != 0)
            cout<<endl;
    }
}

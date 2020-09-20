#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, m, cnt, a;
    multiset<long long int>st;
    multiset<long long int>::iterator it;
    while(scanf("%lld", &n)){
        if(!n)
            return 0;


        cnt = 0;
        while(n--){
            scanf("%lld", &m);
            while(m--){
                scanf("%lld", &a);
                st.insert(a);
            }
            cnt += abs(*st.begin()-*st.rbegin());
            it = st.begin();
            st.erase(it);

            it = st.end();
            it--;
            st.erase(it);
        }
        cout<<cnt<<endl;
        st.clear();
    }
    return 0;
}

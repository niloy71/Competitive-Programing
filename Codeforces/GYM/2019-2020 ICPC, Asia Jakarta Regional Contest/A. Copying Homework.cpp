#include <bits/stdc++.h>
#define fastread ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    fastread
    int n, a;

    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a;
        cout<<n-a+1<<" ";
    }
    cout<<endl;
}

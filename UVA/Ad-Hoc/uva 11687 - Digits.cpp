#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, cnt;
    string s;
    while(cin>>s){
        if(s == "END")
            return 0;
        if(s == "1"){
            printf("1\n");
            continue;
        }
        a = s.size();
        cnt = 2;
        while(a != 1){
            b = 0;
            while(a){
                a /= 10;
                b++;
            }
            a = b;
            cnt++;
        }
        cout<<cnt<<endl;

    }

    return 0;
}

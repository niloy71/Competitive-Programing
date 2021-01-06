#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, f;
    string s1, s2, ss1, ss2, ss3, ss4, ss5;
    cin>>t;
    getchar();
    while(t--){
        getline(cin, s1);
        getline(cin, s2);
        f = 0;
        ss1 = ss2 = ss3 = ss4 = ss5 = "";
        for(auto a: s1){
            if(f == 0){
                if(a == '<'){
                    f = 1;
                    continue;
                }
                else{
                    ss1 += a;
                }
            }
            if(f == 1){
                if(a == '>'){
                    f = 2;
                    continue;
                }
                else{
                    ss2 += a;
                }
            }
            if(f == 2){
                if(a == '<'){
                    f = 3;
                    continue;
                }
                else{
                    ss3 += a;
                }
            }
            if(f == 3){
                if(a == '>'){
                    f = 4;
                    continue;
                }
                else{
                    ss4 += a;
                }
            }
            if(f == 4){
                ss5 += a;
            }
        }

        cout<<ss1<<ss2<<ss3<<ss4<<ss5<<endl;
        cout<<s2.substr(0, s2.size()-3)<<ss4<<ss3<<ss2<<ss5<<endl;
    }
}


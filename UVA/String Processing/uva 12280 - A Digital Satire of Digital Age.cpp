/*
It is a combination of binary representation and string processing problem.
First, you need to detect the which words are in the weight and find the binary representation of the number.
Then comparing the value and check if the weight is in correct position. 
If it is in correct position then print "Correct" or print the correct position of the weight otherwise.
*/

#include <bits/stdc++.h>

using namespace std;


int binrep(int n){
    int cnt = 0;
    for(int i = 1; i <= n; i <<= 1){
        (n&i)? cnt += 2: cnt += 1;
    }
    return cnt;
}

int main()
{
    int a, b, t, i, j, f, x, y, cnt1, cnt2;
    string s[20], ans[20];

    cin>>t;
    s[0] = "........||........";
    s[1] = "........||........";
    s[10] = "........||........";
    s[11] = "........||........";
    for(int tc = 1; tc <= t; tc++){

        for(int i = 2; i < 10; i++){
            cin>>s[i];
        }
        f = cnt1 = cnt2 = 0;
        for(int i = 2; i <9; i++){
            for(int j = 0; j < 8; j++){
                if(s[i][j] == '/')
                    f = 1;
                if(s[i][j] == '\\')
                    f = 0;
                if(f == 1){
                    if(s[i][j] >= 'A' && s[i][j] <= 'Z'){
                        cnt1 += binrep(int(s[i][j]));
                    }
                }
            }
        }
        for(int i = 2; i <9; i++){
            for(int j = 10; j < 18; j++){
                if(s[i][j] == '/')
                    f = 1;
                if(s[i][j] == '\\')
                    f = 0;
                if(f == 1){
                    if(s[i][j] >= 'A' && s[i][j] <= 'Z'){
                        cnt2 += binrep(int(s[i][j]));
                    }
                }
            }
        }

        if(s[0].substr(0, 8) == s[2].substr(0, 8)){
            a = 1;
        }
        else{
            a = 0;
        }
        if(s[0].substr(0, 8) == s[2].substr(10, 8)){
            b = 1;
        }
        else{
            b = 0;
        }
        //cout<<a<<" "<<b;
        printf("Case %d:\n", tc);
        if(((a > b) && (cnt1 > cnt2)) || ((a < b)&&(cnt1<cnt2)) || ((a == b) && (cnt1 == cnt2))){
            printf("The figure is correct.\n");
        }
        else{
            if(cnt1 == cnt2){
                x = 1;
                y = 1;
            }
            if(cnt1 < cnt2){
                x = 0;
                y = 2;
            }
            if(cnt1 > cnt2){
                x = 2;
                y = 0;
            }

            for(int i = 0; i < x; i++){
                ans[i] = "........||";
            }
            for(int i = 0; i < 5; i++){
                for(j = 0; j < 8; j++){
                    if(s[i][j] == '/'){
                        a = i;
                        goto f1;
                    }
                }
            }
            f1:
            for(i = x; i < x+5; i++){
                ans[i] = s[a].substr(0, 10);
                a++;
            }
            for(; i < 7; i++){
                ans[i] = "........||";
            }

            for(int i = 0; i < y; i++){
                ans[i] += "........";
            }
            for(int i = 0; i < 5; i++){
                for(j = 10; j < 17; j++){
                    if(s[i][j] == '/'){
                        a = i;
                        goto f2;
                    }
                }
            }
            f2:
            for(i = y; i < y+5; i++){
                ans[i] += s[a].substr(10, 8);
                a++;
            }
            for(; i < 7; i++){
                ans[i] += "........";
            }
            ans[7] = "------------------";

            for(i = 0; i < 7; i++){
                cout<<ans[i]<<endl;
            }
        }
    }
}

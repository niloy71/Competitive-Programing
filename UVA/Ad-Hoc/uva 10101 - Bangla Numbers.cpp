/*
Problem Type: Ad-hoc

Explanation:
Modules can be use to find the every friction of the number.
*/

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long n, i, f, tc = 1;
    vector<long long>v;
    string s[] = {"", "shata", "hajar", "lakh", "kuti",
                "shata", "hajar", "lakh", "kuti"};

    long long ara[] = {100, 10, 100, 100,
                100, 10, 100, 100};

    while(1 == scanf("%lld", &n)){
        if(n == 0){
            printf("%4lld. 0\n", tc++);
            continue;
        }
        v.clear();
        i = 0;
        while(n){
            v.push_back(n%ara[i]);
            n /= ara[i];
            i++;
        }
        for(i = v.size(); i < 9; i++) v.push_back(0);

        printf("%4lld.", tc++);
        f = 0;
        for(i = 8; i >= 1; i--){
            if(v[i]){
                f = 1;
                cout<<" "<<v[i]<<" "<<s[i];
            }
            else{
                if(i == 4 && f){
                    cout<<" "<<s[i];
                }
            }
        }
        if(v[0]) printf(" %lld", v[0]);
        printf("\n");
    }
}

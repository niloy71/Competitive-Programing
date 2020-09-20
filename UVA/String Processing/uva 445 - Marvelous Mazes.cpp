#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int i, j, cnt;
    while(getline(cin, s)){
        cnt = 0;
        for(i = 0; i < s.size(); i++){
            if(s[i] == '!')
                printf("\n");
            else if(isdigit(s[i])){
                cnt += s[i]-'0';
            }
            else if(s[i] == 'b'){
                for(j = 0; j < cnt; j++)
                    printf(" ");
                cnt = 0;
            }
            else{
                for(j = 0; j < cnt; j++)
                    printf("%c", s[i]);
                cnt = 0;
            }
        }
        printf("\n");
    }

    return 0;
}

/*
Used Technique: String processing 
 
Explanation: 
Check the first number of a string is digit or not.

If digit, reverse the string first. check if f

*/

#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int i, a, tmp, value;
    string s, ans;

    while(getline(cin, s)){
        if(s[0] >= '0' && s[0] <= '9'){
            reverse(s.begin(), s.end());

            i = 0;

            while(i < s.size()){
                if(s[i] == '1'){
                    value = (s[i]-'0')*100+(s[i+1]-'0')*10+s[i+2]-'0';
                    i += 3;
                }
                else{
                    value = (s[i]-'0')*10+s[i+1]-'0';
                    i += 2;
                }
                printf("%c", value);
            }
        }
        else{
            ans = "";
            for(i = s.size()-1; i >= 0; i--){
                a = s[i];
                while(a){
                    tmp = a%10;
                    a /= 10;
                    tmp += '0';
                    ans += tmp;
                }
            }
            cout<<ans;
        }
        printf("\n");
    }
}

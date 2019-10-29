/*
Used Technique: String Add
 
Explanation: 
Input the number as string and add the string from right-hand side. Remember to check for leading zero.
*/

#include <stdio.h>
#include <iostream>

using namespace std;

string add(string s1, string s2)
{
    int i, len1, len2, carry;
    string ans;
    len1 = s1.length();
    len2 = s2.length();

    if(len1 > len2){
        for(i = len2; i < len1; i++)
            s2 += '0';
    }
    else{
        for(i = len1; i < len2; i++)
            s1 += '0';
    }
    carry = 0;
    for(i = 0; i < len1 || i < len2; i++){
        ans += (s1[i]-'0') + (s2[i] - '0') + '0' +carry;
        carry = 0;
        if(ans[i] > 9+'0'){
            ans[i] = ans[i] - 10;
            carry = 1;
        }
    }
    if(carry != 0){
        ans += carry+'0';
    }

    for(i = 0; ans[i] == '0';i++);

    ans = ans.substr(i, ans.size()-i);
    return ans;
}

int main()
{
    int t;
    string s1, s2;
    cin>>t;
    while(t--){
        cin>>s1>>s2;
        cout<<add(s1, s2)<<endl;
    }
}

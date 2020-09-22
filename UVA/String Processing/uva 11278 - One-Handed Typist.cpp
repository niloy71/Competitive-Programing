#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1 = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>? ";
    string s2 = "`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg'~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\" ";
    string s;
    //cout<<s1<<endl<<s2<<endl;
    int i;
    map<char, char>mp;
    for(i = 0; i < s1.size(); i++){
        mp[s1[i]] = s2[i];
    }
    while(getline(cin, s)){
        for(i = 0; i < s.size(); i++){
            cout<<mp[s[i]];
        }
        cout<<endl;
    }
}

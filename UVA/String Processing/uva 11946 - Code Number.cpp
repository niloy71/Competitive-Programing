#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1 = "3014985762";
    string s2 = "EOIAPBSTGZ";
    string s;
    int t, i;
    map<char, char>mp;
    for(i = 0; i < s1.size(); i++){
        mp[s1[i]] = s2[i];
    }
    cin>>t;
    getchar();
    while(t--){
        while(getline(cin, s)){
            if(s == "")
                break;
            for(i = 0; i < s.size(); i++){
                if(mp[s[i]])
                    cout<<mp[s[i]];
                else
                    cout<<s[i];
            }
            cout<<endl;
        }
        if(t)
            cout<<endl;
    }
}

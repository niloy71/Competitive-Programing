#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, s1;
    int i, j, t, tc = 1;
    cin>>t;
    getchar();
    getchar();
    while(t--){
        printf("Case #%d:\n", tc++);
        while(getline(cin, s)){
            if(s == "")
                break;
            j = 1;
            s1 = "";
            for(i = 0; i < s.size(); i++){
                if(s[i] == ' '){
                    if(s1.size() >= j){
                        cout<<s1[j-1];
                        j++;
                    }
                    s1 = "";
                }
                else{
                    s1.push_back(s[i]);
                }
            }
            if(s1.size() >= j){
                cout<<s1[j-1];
            }
            cout<<endl;
        }
        if(t)
            cout<<endl;
    }
}

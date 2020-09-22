#include <bits/stdc++.h>
#define vowel(a) (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
#define iflower(c) (c >= 'a' && c <= 'z')
#define ifupper(c) (c >= 'A' && c <= 'Z')
#define ifnum(c) (c >= '0' && c <= '9')
#define ifAlpha_numaric(c) (iflower(c) || ifupper(c) || ifnum(c))
using namespace std;

int main()
{
    string s, s1, ch;
    int i;
    while(getline(cin, s)){
        ch = "";
        for(i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                cout<<s1<<ch<<" ";
                s1 = "";
                ch = "";
            }
            else if(!iflower(s[i]) && !ifupper(s[i])){
                cout<<s1<<ch<<s[i];
                s1 = "";
                ch = "";
            }
            else if(ch == ""){
                if(vowel(s[i])){
                    s1.push_back(s[i]);
                    ch = "ay";
                }
                else{
                    ch.push_back(s[i]);
                    ch += "ay";
                }
            }
            else{
                s1.push_back(s[i]);
            }
        }
        cout<<s1<<ch<<endl;
        s1 = "";
        ch = "";
    }
}

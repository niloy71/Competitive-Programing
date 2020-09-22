#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int t, sqlen, i, j;
    scanf("%d", &t);
    getchar();
    while(t--){
        getline(cin, s);
        sqlen = sqrt(s.size());

        if(sqlen * sqlen != s.size()){
            printf("INVALID\n");
            continue;
        }
        for(i = 0; i < sqlen; i++){
            for(j = 0; j < sqlen; j++){
                printf("%c", s[j*sqlen+i]);
            }
        }
        printf("\n");
    }
}

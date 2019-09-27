/*
Used Technique: LCS

Explanation: 
Answer is the length of the longest common subsequence of the two string. 

*/

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    string s1, s2;
    int dp[110][110], i, j, tc = 1, m, n;
    while(getline(cin, s1)){
        if(s1 == "#")
            return 0;
        getline(cin, s2);

        m = s1.size();
        n = s2.size();

        for(i = 0 ; i <= m; i++) dp[i][0] = 0;
        for(i = 0 ; i <= n; i++) dp[0][i] = 0;

        for(i = 1; i <= m; i++){
            for(j = 1; j <= n; j++){
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = max(dp[i-1][j-1]+1, max(dp[i-1][j], dp[i][j-1]));
                }
                else{

                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        printf("Case #%d: you can visit at most %d cities.\n", tc++, dp[m][n]);

    }
}

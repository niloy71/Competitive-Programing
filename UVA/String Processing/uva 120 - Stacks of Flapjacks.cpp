#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int a, ara[100], ara1[100], i, j, k;

    while(getline(cin, s)){
        stringstream ss(s);
        i = 0;
        while(ss >> a){
            ara[i] = a;
            ara1[i++] = a;
        }
        printf("%d", ara[0]);
        for(j = 1; j < i; j++){
            printf(" %d", ara[j]);
        }
        printf("\n");

        sort(ara1, ara1+i);

        for(j = i-1; j >= 0; j--){
            if(ara[j] != ara1[j]){
                for(k = 0; k < j; k++){
                    if(ara[k] == ara1[j]){
                        if(k != 0){
                            printf("%d ", i-k);
                            reverse(ara, ara+k+1);
                        }
                        printf("%d ", i-j);
                        reverse(ara, ara+j+1);
                    }
                }
            }
        }
        printf("0\n");

    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int a, b, n, i, j, k, cnt, tc = 1;
char ara[50][50];
int dx[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy[] = {1, -1, 1, 0, -1, 1, 0, -1};
queue<int>Q1;
queue<int>Q2;

int main()
{
    while(1 == scanf("%d", &n)){
        for(i = 1; i <= n; i++){
            for(j = 1; j <= n; j++){
                cin>>ara[i][j];
            }
        }

        cnt = 0;

        for(i = 1; i <= n; i++){
            for(j = 1; j <= n; j++){
                if(ara[i][j] == '1'){
                    cnt++;
                    Q1.push(i);
                    Q2.push(j);

                    while(!Q1.empty()){
                        a = Q1.front();
                        b = Q2.front();
                        Q1.pop();
                        Q2.pop();
                        for(k = 0; k < 8; k++){
                            if(ara[a+dx[k]][b+dy[k]] == '1'){
                                Q1.push(a+dx[k]);
                                Q2.push(b+dy[k]);
                                ara[a+dx[k]][b+dy[k]] = '0';
                            }
                        }
                    }
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n", tc++, cnt);

    }

}

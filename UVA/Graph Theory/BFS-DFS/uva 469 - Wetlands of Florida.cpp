#include <bits/stdc++.h>

using namespace std;

int i, n, m, t, f, a, b, ara[110][110];

int dx[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy[] = {1, -1, 1, 0, -1, 1, 0, -1};

string s, ss[110];
queue<int>q1;
queue<int>q2;
int bfs(int x, int y)
{
    int xx, yy, aa, bb;
    if(ara[x][y]){
        return ara[x][y];
    }
    q1.push(x);
    q2.push(y);
    ara[x][y] = 1;
    m = ss[0].size();
    int cnt = 1;
    while(!q1.empty()){
        xx = q1.front();
        yy = q2.front();

        q1.pop();
        q2.pop();

        for(int i = 0; i < 8; i++){
            aa = xx+dx[i];
            bb = yy+dy[i];
            if(aa >= 0 && aa < n && bb >= 0 && bb <= m){
                if(ss[aa][bb] == 'W' && ara[aa][bb] == 0){
                    q1.push(aa);
                    q2.push(bb);
                    ara[aa][bb] = -1;
                    cnt++;
                }
            }
        }
    }

    q1.push(x);
    q2.push(y);
    ara[x][y] = cnt;

    while(!q1.empty()){
        xx = q1.front();
        yy = q2.front();

        q1.pop();
        q2.pop();

        for(int i = 0; i < 8; i++){
            aa = xx+dx[i];
            bb = yy+dy[i];
            if(aa >= 0 && aa < n && bb >= 0 && bb <= m){
                if(ss[aa][bb] == 'W' && ara[aa][bb] == -1){
                    q1.push(aa);
                    q2.push(bb);
                    ara[aa][bb] = cnt;
                }
            }
        }
    }

    return cnt;
}

int main()
{
    scanf("%d", &t);
    getchar();
    getchar();
    while(t--){
        for(int p = 0; p < 110; p++){
            for(int q = 0; q < 110; q++){
                ara[p][q] = 0;
            }
        }
        n = 0;
        while(getline(cin, s)){
            if(s == "")
                break;
            else if(isdigit(s[0])){
                sscanf(s.c_str(), "%d %d", &a, &b);
                cout<<bfs(a-1, b-1)<<endl;

            }
            else
                ss[n++] = s;
        }
        if(t)
            printf("\n");
    }
    return 0;
}

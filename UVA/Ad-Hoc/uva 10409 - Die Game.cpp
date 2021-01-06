#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int tmp, n;
    while(scanf("%d", &n)){
        if(!n)
            return 0;
        int ara[] = {1, 2, 3, 6, 5, 4};
        //top, north, west, bottom, south, east

        while(n--){
            cin>>s;
            if(s == "north"){
                tmp = ara[3];
                ara[3] = ara[1];
                ara[1] = ara[0];
                ara[0] = ara[4];
                ara[4] = tmp;
            }
            if(s == "east"){
                tmp = ara[3];
                ara[3] = ara[5];
                ara[5] = ara[0];
                ara[0] = ara[2];
                ara[2] = tmp;
            }
            if(s == "south"){
                tmp = ara[3];
                ara[3] = ara[4];
                ara[4] = ara[0];
                ara[0] = ara[1];
                ara[1] = tmp;
            }
            if(s == "west"){
                tmp = ara[3];
                ara[3] = ara[2];
                ara[2] = ara[0];
                ara[0] = ara[5];
                ara[5] = tmp;
            }
        }
        cout<<ara[0]<<endl;
    }
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long x, y, x1, y1, x2, y2;

    double ans;

    cin>>x>>y>>x1>>y1>>x2>>y2;

    if(x <= x1 && y <= y1){
        x = abs(x-x1);
        y = abs(y-y1);
        ans = sqrt((x*x)+(y*y));
    }
    else if(x >= x2 && y <= y1){
        x = abs(x-x2);
        y = abs(y-y1);
        ans = sqrt((x*x)+(y*y));
    }
    else if(x >= x2 && y >= y2){
        x = abs(x-x2);
        y = abs(y-y2);
        ans = sqrt((x*x)+(y*y));
    }
    else if(x <= x1 && y >= y2){
        x = abs(x-x1);
        y = abs(y-y2);
        ans = sqrt((x*x)+(y*y));
    }
    else if(x1 <= x && x <= x2 && y <= y1){
        ans = abs(y-y1);
    }
    else if(x1 <= x && x <= x2 && y >= y2){
        ans = abs(y-y2);
    }
    else if(y1 <= y && y <= y2 && x <= x1){
        ans = abs(x-x1);
    }
    else if(y1 <= y && y <= y2 && x >= x2){
        ans = abs(x-x2);
    }
    printf("%.3lf\n", ans);

}

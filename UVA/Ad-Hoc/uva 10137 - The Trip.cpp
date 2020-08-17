#include <bits/stdc++.h>

using namespace std;

double cast2deci(double a)
{
    a = a*100;
    a = int(a);
    a /= 100;
    return a;
}

int main()
{

    int i, n;
    double ara[1010], avg, cnt, cnt1, cnt2;
    while(scanf("%d", &n)){
        if(!n)
            return 0;
        cnt = cnt1 = cnt2 = 0;
        for(i = 0; i < n; i++){
            scanf("%lf", &ara[i]);
            cnt += ara[i];
        }
        avg = cnt/n;
        avg = cast2deci(avg);
        double avg1 = avg+0.01;

        for(i = 0; i < n; i++){
            if(ara[i] < avg){
                cnt1 += (avg-ara[i]);
            }
            else if(ara[i] > avg1){
                cnt2 += (ara[i]-avg1);
            }
        }
        cout<<"$"<<fixed<<setprecision(2)<<max(cnt1, cnt2)<<endl;
    }

}


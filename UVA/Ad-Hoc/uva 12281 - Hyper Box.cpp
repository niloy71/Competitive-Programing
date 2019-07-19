/*
Fist, you need to generate all the Fibonacci number between 1 to 2000000000.
Then for each number in array(supposes, ai) you need to count what is the least number of Fibonacci number the sum up to that
number(ai).
A simple way to do this is, subtruct the biggest Fibonacci number greater then or equal to the number(ai). 
Then, subtract the Fibonacci number from the number(ai).   
Then, subtruct the biggest Fibonacci number from the new value of the number(ai) and continue this until the value of the 
number(ai) become zero.
You need to count how how many subtraction you do for each number in the given array. That is the counter of the least number
of Fibonacci number that can sum up to the number.
The multiplication of the all the counter for each number is the answer  
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, i, cnt, cnt1, a, b, c,t, tc = 1, ara[110];
    vector<long long>v;
    a = 1;
    for(i = 1; i <= 2000000000;){
        v.push_back(i);
        b = i;
        i += a;
        a = b;
    }
    sort(v.begin(), v.end(), greater<int>());

    scanf("%lld", &t);
    while(t--){
        scanf("%lld", &n);

        for(int j = 0; j < n; j++){
            scanf("%lld", &a);

            cnt = 0;
            i = 0;
            while(a){
                if(v[i] > a){
                    i++;
                }
                else{
                    cnt++;
                    a -= v[i];
                }
            }
            ara[j] = cnt;
        }
        cnt = 1;
        for(i = 0; i < n; i++){
            cnt *= ara[i];
        }

        printf("Case %lld: %lld\n", tc++, cnt);
    }
}

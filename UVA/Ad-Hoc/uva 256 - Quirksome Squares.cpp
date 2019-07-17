/*This problem can be solved by using a single linear loop. 
Just loop through the numbers and check which number is satisfing the condition.*/


#include <stdio.h>

int main()
{
    long long n, a, b, x, y, i, j, cnt, tmp, sum;

    while(1 == scanf("%lld", &n)){
        a = b = 0;
        x = y = 1;
        for(i = 0; i < n/2; i++){
            x *= 10;
        }
        for(i = 0; i < n; i++){
            y *= 10;
        }
        for(i = 0; i < y; i++){


            sum = (a+b)*(a+b);
            if(sum == i){
                tmp = y/10;
                cnt = 0;
                while(tmp > i){
                    cnt++;
                    tmp /= 10;
                }
                if(i == 0)
                    cnt--;

                for(j = 0; j < cnt; j++){
                    printf("0");
                }
                printf("%lld\n", i);
            }
            b++;
            if(b >= x){
                b = 0;
                a++;
            }
        }

    }
}

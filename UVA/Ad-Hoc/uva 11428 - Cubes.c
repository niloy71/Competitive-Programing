#include <stdio.h>

int main()
{
    int n, i, j, x, y;
    char ch;

    while(scanf("%d", &n)){
        if(!n)
            return 0;
        y = 100000;
        for(i = 1; i <= 100; i++){
            for(j = 1; j <= i; j++){
                if(i*i*i - j*j*j == n){
                    if(j < y){
                        x = i;
                        y = j;
                    }
                }
            }
        }
        if(y == 100000){
            printf("No solution\n");
            continue;
        }
        printf("%d %d\n", x, y);
    }
    return 0;
}

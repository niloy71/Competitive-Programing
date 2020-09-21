#include <stdio.h>

int main()
{
    int a, b, c;
    while(3 == scanf("%d %d %d ", &a,&b,&c)){
        if(a+b > c)
            printf("Hunters win!\n");
        else
            printf("Props win!\n");
    }

    return 0;
}

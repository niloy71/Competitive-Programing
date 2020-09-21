#include <stdio.h>

char s[30][30];

int rook(int a, int b, int c)
{
    int i, j;
    for(i = a+1, j = b; i <18; i++){
        if(s[i][j] == 'R'+c || s[i][j] == 'Q'+c){
            return 1;
        }
        else if(s[i][j] != '.')
            break;
    }
    for(i = a, j = b+1; j < 18; j++){
        if(s[i][j] == 'R'+c || s[i][j] == 'Q'+c){
            return 1;
        }
        else if(s[i][j] != '.')
            break;
    }
    for(i = a-1, j = b; i > 9; i--){
        if(s[i][j] == 'R'+c || s[i][j] == 'Q'+c){
            return 1;
        }
        else if(s[i][j] != '.')
            break;
    }
    for(i = a, j = b-1; j > 9; j--){
        if(s[i][j] == 'R'+c || s[i][j] == 'Q'+c){
            return 1;
        }
        else if(s[i][j] != '.')
            break;
    }
    return 0;
}
int bishop(int a, int b, int c)
{
    int i, j;
    for(i = a+1, j = b+1; i <18 && j <18; i++, j++){
        if(s[i][j] == 'B'+c || s[i][j] == 'Q'+c){
            return 1;
        }
        else if(s[i][j] != '.')
            break;
    }
    for(i = a-1, j = b+1; i > 9 && j < 18; i--,j++){
        if(s[i][j] == 'B'+c || s[i][j] == 'Q'+c){
            return 1;
        }
        else if(s[i][j] != '.')
            break;
    }
    for(i = a-1, j = b-1; i > 9 && j > 9; i--, j--){
        if(s[i][j] == 'B'+c || s[i][j] == 'Q'+c){
            return 1;
        }
        else if(s[i][j] != '.')
            break;
    }
    for(i = a+1, j = b-1; i < 18 && j > 9; i++, j--){
        if(s[i][j] == 'B'+c || s[i][j] == 'Q'+c){
            return 1;
        }
        else if(s[i][j] != '.')
            break;
    }
    return 0;
}

int knight(int a, int b, int c)
{
    if(s[a+2][b+1] == 'N'+c ||s[a+2][b-1] == 'N'+c ||s[a-2][b+1] == 'N'+c ||s[a-2][b-1] == 'N'+c ||
       s[a+1][b+2] == 'N'+c ||s[a+1][b-2] == 'N'+c ||s[a-1][b+2] == 'N'+c ||s[a-1][b-2] == 'N'+c){
        return 1;
       }
    return 0;
}
int pawn(int a, int b, int c){
    if(c == 0){
        if(s[a+1][b+1] == 'P' ||s[a+1][b-1] == 'P'){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        if(s[a-1][b+1] == 'p' ||s[a-1][b-1] == 'p'){
            return 1;
        }
        else{
            return 0;
        }
    }
}


int main()
{
    int cnt, i, j, tc = 1;
    while(1){
        cnt = 0;

        for(i = 10; i < 18; i++){
            for(j = 10; j < 18; j++){
                scanf("%c", &s[i][j]);
                if(s[i][j] == '.'){
                    cnt++;
                }
            }
            getchar();
        }

        if(cnt == 64)
            return 0;
        getchar();

        for(i = 10; i < 18; i++){
            for(j = 10; j < 18; j++){
                if(s[i][j] == 'k'){
                    if(rook(i, j, 0) || bishop(i, j, 0) || knight(i, j, 0) || pawn(i, j, 0)){
                        printf("Game #%d: black king is in check.\n", tc++);
                        goto f1;
                    }
                }
                if(s[i][j] == 'K'){
                    if(rook(i, j, 'a'-'A') || bishop(i, j, 'a'-'A') || knight(i, j, 'a'-'A') || pawn(i, j, 'a'-'A')){
                        printf("Game #%d: white king is in check.\n", tc++);
                        goto f1;
                    }
                }
            }
        }
        printf("Game #%d: no king is in check.\n", tc++);
        f1:
            continue;

    }

    return 0;
}


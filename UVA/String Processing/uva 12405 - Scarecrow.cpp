/*
Simple string processing problem. You have to use minimum numberof scarecrows to cover all the usefull section of field.
One easy way to do that is when you find a usefull section or '.' in string than place a scarecrow in the next section of the field.
So it can cover the usefull section and next to section of the field. 
In other way we can say, itterate through the whole `string s`. if s[i] == '.' then, increase the counter of scarecrow and
make s[i+1] and s[i+2] is equel to '#'. that's marke that there are no need of putting any scarecrow beside them.
*/


#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int t, n, i, cnt;
    string s;
    scanf("%d", &t);

    for(int tc = 1; tc <= t; tc++){
        scanf("%d", &n);
        cin>>s;

        s = s+"##";
        cnt = 0;
        for(i = 0; i < n; i++){
            if(s[i] == '.'){
                cnt++;
                s[i+1] = '#';
                s[i+2] = '#';
            }
        }
        printf("Case %d: %d\n", tc, cnt);
    }
}

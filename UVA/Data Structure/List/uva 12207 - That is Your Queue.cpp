/*
Used Technique: Data structure>>list

Explanation:
We will push 1 to p(number of people) in a list but As the command is not greater then 1000 so we will not push more then 1000
number initially.
Than for 'N' command we will print then number in front than pop it and again push it in the back of the list.
And for 'E' command we will erase then value entered after E from the list, if it is in the list. Then we push the value in
front of the list
*/

#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

int main()
{
    int n, m, a, tc = 1;
    char ch;
    list<int>lst;
    list<int>::iterator it;
    while(scanf("%d %d", &n, &m)){
        if(!n && !m)
            return 0;

        printf("Case %d:\n", tc++);
        lst.clear();
        if(n > 1000)
            n = 1000;
        for(a = 1; a <= n; a++)
            lst.push_back(a);

        while(m--){
            getchar();
            scanf("%c", &ch);

            if(ch == 'N'){
                a = *lst.begin();
                printf("%d\n", a);
                lst.pop_front();
                lst.push_back(a);
            }
            else{
                scanf("%d", &a);
                for(it = lst.begin(); it != lst.end(); it++){
                    if(*it == a){
                        lst.erase(it);
                        break;
                    }
                }
                lst.push_front(a);

            }
        }

    }
}

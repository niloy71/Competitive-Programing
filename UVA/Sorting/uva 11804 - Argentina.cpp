/*
Used Technique: Sorting

Explanation:
Sort all the element according to bellow: 
  place the player with hight attack first. if two player attack is equal then place the player with lowest defencsive skil
  first. If that is equel too than put the player first whos name come first in lexicograpycall order.
The frist five player is your attcker and last five is your defender.
 
Sort first five player again according to lexicograpycal order and then do the same for the last five player.
*/

#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct stk{
    int def, atk;
    string name;
};

bool comp(stk a, stk b){
    if(a.atk == b.atk){
        if(a.def == b.def){
            return a.name < b.name;
        }
        return a.def < b.def;
    }
    return a.atk > b.atk;
}

bool comp1(stk a, stk b){
    return a.name < b.name;
}
stk stk[15];


int main()
{
    int t, i;

    scanf("%d", &t);

    for(int tc = 1; tc <= t; tc++){
        for(i = 0; i < 10; i++){
            cin>>stk[i].name>>stk[i].atk>>stk[i].def;
        }
        sort(stk, stk+10, comp);
        sort(stk, stk+5, comp1);
        sort(stk+5, stk+10, comp1);
        cout<<"Case "<<tc<<":\n("<<stk[0].name;

        for(i = 1; i <5; i++){
            cout<<", "<<stk[i].name;
        }
        cout<<")\n("<<stk[5].name;

        for(i = 6; i <10; i++){
            cout<<", "<<stk[i].name;
        }
        cout<<")"<<endl;
    }
}

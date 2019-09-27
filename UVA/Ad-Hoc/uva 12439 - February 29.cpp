#include <stdio.h>
#include <iostream>
#define fastread ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int cnt29(string month, int day, int year)
{
    if((month == "January") ||(month == "February" && day<29))
        year--;
    return (int)(year/4) - (int)(year/100) + (int)(year/400);
}

int main()
{
    fastread
    int t, day, year, cnt, cnt1, cnt2;
    string month;
    char c;
    cin>>t;
    for(int tc = 1; tc <= t; tc++){
        cin>>month>>day>>c>>year;
        day--;
        cnt1 = cnt29(month, day, year);

        cin>>month>>day>>c>>year;
        cnt2 = cnt29(month, day, year);
        cnt = max(0, cnt2-cnt1);
        cout<<"Case "<<tc<<": "<<cnt<<endl;

    }

}

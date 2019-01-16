#include<iostream>
#include"1053028.h"
using namespace std;
int lifeCode(int year,int month,int day);
int main()
{
    int n,year,month,day;

    cin >> n;

    while(n--)
    {
        cin >> year >> month >> day;
        cout << lifeCode(year,month,day) << endl;
    }

    return 0;
}

#include<iostream>
#include<iomanip>
#include<cmath>
#include"1053028.h"
using namespace std;
double area(double radius);    //Calculate the area of pasture
double area(double length,double width);  //Calculate the area of farmland
double area(double edge1,double edge2,double edge3); //Calculate the area of hotel
int main()
{
    double n,n1,n2,n3,ans;
    char c;

    cin >> n;

    while(n--)
    {
        cin >> c;

        if(c=='P')
        {
            cin >> n1;
            ans=area(n1);
        }
        else if(c=='F')
        {
            cin >> n1 >> n2;
            ans=area(n1,n2);
        }
        else if(c=='H')
        {
            cin >> n1 >> n2 >> n3;
            ans=area(n1,n2,n3);
        }

        cout << fixed << setprecision(2) << ans << endl;
    }

    return 0;
}

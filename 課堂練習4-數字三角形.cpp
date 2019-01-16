#include <iostream>
using namespace std;
int main()
{
    int N,n,num,base;
    while(1)
    {
        cin>>N;
        n=N;
        if(N==0)return 0;
        for(;N>0;N--)
        {
            for(base=N-1;base>0;base--)
                {
                    cout<<'_';
                }
            for(num=1;num<=n-N+1;num++)
                {
                    cout<<'+';
                }
                cout<<endl;
        }

    }
}

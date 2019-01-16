#include<iostream>
using namespace std;
int main(){
    int m,n,total,bug1,bug2;
    cin>>n;
    while(n--){
        cin>>m;
        for(bug1=0,bug2=1,total=2;m>0;m--){
            total=bug1+bug2;
            bug1=bug2;
            bug2=total;
        }
        cout<<total<<endl;
    }
    return 0;
}


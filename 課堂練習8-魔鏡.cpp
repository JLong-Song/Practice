#include<iostream>
using namespace std;
int main(){
    int n,m,i;
    char a[i];
    cin>>n;
    while(n--){
        cin>>m;
        for(i=0;i<m;i++){
            cin>>a[i];
        }
        for(i=m-1;i>=0;i--){
            cout<<a[i];
        }
    }
    return 0;
}

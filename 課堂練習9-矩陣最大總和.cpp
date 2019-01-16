#include<iostream>
using namespace std;
int main(){
    int N,m,n,k;
    int i,j;
    int a=0,total=0,x,y;
    int arr[100][100];
    cin>>N;
    while(N--){
        cin>>m>>n>>k;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        for(int K=1;K<=k;K++){
            for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                    if(arr[i][j]>=a){
                        a=arr[i][j];
                        x=i;
                        y=j;
                    }
                }
            }
            total+=a;
            a=0;
            arr[x][y]=0;
        }
        cout<<total<<endl;
    }
    return 0;
}

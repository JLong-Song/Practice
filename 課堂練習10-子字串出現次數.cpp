#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int N,i,j,sum=0,num=0;
    char one[129],two[513];
    cin>>N;
    while(N--){
        cin>>one>>two;
        for(i=0;i<512;i++){
            for(j=0,sum=0;j<strlen(one);j++){
                if(one[j]==two[i+j])
                    sum++;
            }
            if(sum==strlen(one))
                num++;
        }
        cout<<num<<endl;
        num=0;
    }
    return 0;
}

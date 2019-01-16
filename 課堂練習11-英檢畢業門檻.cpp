#include<iostream>
using namespace std;
int main(){
    int n,eng[1000],i,j,best=0,worst=0;
    int a=0,b=0;
    while(cin>>n){
        for(i=0;i<n;i++){
            cin>>eng[i];
        }
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(eng[i]>eng[j])
                    swap(eng[i],eng[j]);
            }
        }
        for(i=0;i<n;i++){
            if(eng[i]>=550)
                best++;
            else worst++;
        }
        for(i=0;i<n;i++){
            if(eng[i]>=550){
                a=i;
                break;
            }
            else b=i;
        }
        for(i=0;i<n;i++){
            cout<<eng[i]<<" ";
            if(i==n-1) cout<<endl;
        }
        if(best==n)
            cout<<eng[a]<<endl<<"best\n";
        else if(worst==n) cout<<"worst\n"<<eng[b]<<endl;
        else cout<<eng[a]<<endl<<eng[b]<<endl;
        for(i=0;i<1000;i++){
            eng[i]=0;
        }
        a=0;
        b=0;
        best=0;
        worst=0;
    }
    return 0;
}

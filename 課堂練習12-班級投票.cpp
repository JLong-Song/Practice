#include<iostream>
using namespace std;
int main(){
    int N,stu,i,j,big,a,b;
    double temp;
    typedef int* intptr;
    intptr d;
    cin>>N;
    while(N--){
        b=0;
        cin>>stu;
        temp=stu;
        temp/=3;
        d=new int[stu];
        for(i=0;i<stu;i++){
            cin>>d[i];
        }
        for(i=1;i<=stu;i++){
            for(j=0,a=0;j<stu;j++){
                if(d[j]==i) a++;
                if(a>b){
                    b=a;
                    big=i;
                }
            }
        }
        if(b>=temp) cout<<big<<endl;
        else cout<<"No solution\n";
        delete d;
    }
}


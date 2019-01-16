/*
問題描述 ：
學期開始的第一天，班上要選出班代負責處理各種事務，票選的規則相信同學們都十分清楚!因此請撰寫一個程式計算出誰獲選為班代吧!
一個候選人當選的條件為: 其他人的得票數都必須低於自己的得票數，同時自己的得票數必須超過總人數的1/3(含1/3)
(舉例而言，若N=10，至少要拿到4票以上才有機會當選為班代)。

輸入說明 ：
第一行為一正整數，代表接下來有多少筆測資(不超過1000筆)。
每筆測資首行為一正整數N，代表班上的人數，N不超過1000000。
接下來於一行包括N個正整數，每個正整數介於1至N，代表每張票所代表的候選人編號。

輸出說明 ：
請輸出每筆測資中獲選為班代的同學編號，若無人當選，則輸出”No solution”。
*/

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


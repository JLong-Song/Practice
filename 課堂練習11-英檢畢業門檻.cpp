/*
問題描述：
本校為加強本校學生英語文溝通能力，擴展國際視野，提升未來發展競爭力，
設有學生英語文能力畢業門檻。凡日間大學部學生及研究生，需於畢業前持符合標準之校外標準化測驗成績單申請登記。
在眾多校外英檢中，最多同學選擇的是多益測驗。多益測驗滿分為990分，本校多益測驗通過標準為550分。
每次測驗完畢就有許多同學持成績單前往語言中心登記，在所有同批通過英檢的同學中，成績最接近550的可以說是最幸運的，
反之，在所有同批未通過英檢的同學中，成績最接近550的可以說是最不幸的！
現在請你寫一個程式，將每批來登記的同學成績做一排序，之後找出本次最幸運的和最不幸的同學成績。

輸入說明：
第一列為一個整數 n，表示本批共有n位同學前往登記1<=n<=1000。之後有n個整數，整數的值介於0到990之間，每個數字間有白空格隔開。
輸出說明：
輸出第一行為所有成績由小到大排序結果，數字間以一個空白隔開，最後一個數字後沒有空白；第二行為最幸運的同學成績，
若整批同學都不及格，則輸出 “worst”；第三行為最不幸的同學成績，若整批同學都及格，則輸出 “best”。
*/

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

/*
問題描述：

給予兩個英文字串，請計算出第一個字串出現在第二個字串中的次數。

輸入說明：

第一行為一個正整數，代表接下來有多少筆測資。

每筆分為兩行，第一行是由英文大小寫字母與數字所組成的字串，長度不超過 128 個字母。

第二行也是由英文大小寫字母與數字所組成的字串，長度不超過 512 個字母。

輸出說明：

輸出每筆測資中第一個字串出現在第二個字串中的次數。
*/

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

/*
問題描述：
黑皇后非常的自戀，立志要成為全世界最美麗的女人，但是她又不確定自己是不是最美的，
於是他前去請教無所不知的魔鏡，「魔鏡啊魔鏡～誰是世界上最美的女人啊？」黑皇后這麼問著，「囉主公雪白是然當」魔鏡這麼答道，
原來這魔鏡有個特點，不僅鏡子裡面的人事物跟外面左右相反，就連說話的順序也左右相反，
黑皇后聽到魔鏡的回答後眉頭一皺，「這魔鏡說的哪國語言，聽都聽不懂！」黑皇后說到這突然轉頭望著你「師爺，你給本宮翻譯翻譯。」

輸入說明：
輸入一個數字n，代表有n筆測資。
每筆測資有兩行，第一行是一個正整數，表示字串長度，弟二行是一組由大寫字母 A~Z 、小寫字母 a~z 、數字 0~9 所組成的字串，字串長度不超過1000。

輸出說明：
將字串反向輸出於一行。
*/

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

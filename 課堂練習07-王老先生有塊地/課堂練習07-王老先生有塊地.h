/*
問題描述：
住隔壁的老王有個煩惱，他有一塊很大很大的土地，想要規劃成一座大型綜合休閒牧場，
上面有許多座圓形的牧場、許多處矩形的農地、許多棟三角形的特色旅館，
為了妥善的利用每一寸地，他需要清楚的知道每個建築的佔地面積，但老王自從上了年紀後，腦袋變得不好使了，便成天擔心自己可能算錯了哪筆資料。
看著從小照顧自己長大的好鄰居整日擔心這擔心那的，你感到心中泛起一陣不忍，於是決定幫他計算每棟建築的佔地面積，希望可以減輕他的煩惱。

輸入說明：
輸入一個數字n，代表有n筆測資。
每筆測資包含一個大小英文字母，其中P代表牧場、F代表農田、H代表旅館，之後根據建築的不同會有若干正整數。
牧場後面會接一個數字，表示牧場半徑。(圓周率=3.1416)
農田後面會接兩個數字，表示農田長寬。
旅館後面會接三個數字，表示旅館邊長。
所有字母和數字間皆以一個空白隔開。

輸出說明：
輸出每筆測資計算後的結果至小數後第二位，輸出後換行。

請完成主程式class7.cpp所需要的程式碼，將所需要的程式碼寫在標頭檔內繳交，檔名為"學號.h"。
*/

double area(double radius){
    return pow(radius,2)*3.1416;
    //Calculate the area of pasture
}
double area(double length,double width){
    return length*width;
    //Calculate the area of farmland
}
double area(double edge1,double edge2,double edge3){
    int a=(edge1+edge2+edge3)/2,b;
    b=a*(a-edge1)*(a-edge2)*(a-edge3);
    return pow(b,0.5);
    //Calculate the area of hotel
}

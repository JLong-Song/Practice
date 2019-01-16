#include <iostream>
using namespace std;
int main(){
    int M,D,S;
    cin>>M>>D;
    S=(M*2+D)%3;
    switch(S){
    case 0:
        cout<<"normal";
        break;
    case 1:
        cout<<"good";
        break;
    case 2:
        cout<<"excellent";
        break;
    }
    return 0;
}

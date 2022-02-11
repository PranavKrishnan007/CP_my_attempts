#include <iostream>
using namespace std;

int main() {
    int a,cnt_d=0,cnt_a=0;
    string s;
    cin >> a;
    cin >> s;
    for(int i =0;i<a;i++){
        if(s[i]=='A'){
            cnt_a += 1;
        }
        else{
            cnt_d += 1;
        }
    }
    if(cnt_a == cnt_d){
        cout<<"Friendship";
    }
    if(cnt_a < cnt_d){
        cout<<"Danik";
    }
    if(cnt_a > cnt_d){
        cout<<"Anton";
    }
    return(0);
}

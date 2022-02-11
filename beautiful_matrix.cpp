#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
 
int main() {
    int arr[5][5],val_i,val_j,final;
    for(int i=0;i<5;i++){
        for(int j=0;j<1;j++){
            cin>>arr[i][j]>>arr[i][j+1]>>arr[i][j+2]>>arr[i][j+3]>>arr[i][j+4];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j] == 1){
                val_i = 2-i;
                val_j = 2-j;
            }
        }
    }
    if(val_i<0){
        val_i *= -1;
    }
    if(val_j<0){
        val_j *= -1;
    }
    cout<<val_i+val_j;
    return(0);
}

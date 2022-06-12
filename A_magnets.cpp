#include<stdio.h>
using namespace std;

int main(){
    int n, count = 1; 
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int val = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] == val)
            continue;
        else
            val = a[i];
            count++;
    }
    printf("%d", count);
    return 0;
}
    
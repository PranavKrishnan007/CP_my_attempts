
 #include <iostream>
using namespace std;
 
int main() {
    int a, p,v,t, count = 0, sum; 
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>p>>v>>t;
        sum = p+v+t;
        if(sum>1){
            count += 1;
        }
    }
    cout<<count;
    return(0);
}

#include<iostream>
using namespace std;


void ra_pyramid2(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" " ;
        }
        cout<<endl;
    }
   
}

int main(){
    int n;
    cin>>n;
    ra_pyramid2(n);
    return 0;
}

#include<iostream>
using namespace std;

//only for odd n;

void starPlus(int n){
    int mid = n/2+1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(mid==i || mid==j) cout<<"*"<<" ";
            else cout<<" "<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    starPlus(n);
    return 0;
}
#include<iostream>
using namespace std;


void oddRightAngled(int n){
    for(int i=1; i<n; i++){
        for(int j=1; j<=2*i-1; j+=2){
            cout<<j<<" ";
        }
        cout<<endl;
    }
   
}

int main(){
    int n;
    cin>>n;
    oddRightAngled(n);
    return 0;
}
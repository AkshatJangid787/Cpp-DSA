#include<iostream>
using namespace std;


void AlphabetSquare(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<=n; j++){
            cout<<char(j+64)<<" ";
        }
        cout<<endl;
    }
   
}

int main(){
    int n;
    cin>>n;
    AlphabetSquare(n);
    return 0;
}
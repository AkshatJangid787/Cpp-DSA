#include<iostream>
using namespace std;


void right_angledTriangle(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
   
}

int main(){
    int n;
    cin>>n;
    right_angledTriangle(n);
    return 0;
}
#include<iostream>
using namespace std;


void invertedPyramid(int n){
    for(int i=0; i<n; i++){
        for(int j=n; j>i; j--){
            cout<<"* " ;
        }
        cout<<endl;
    }
   
}

int main(){
    int n;
    cin>>n;
    invertedPyramid(n);
    return 0;
}
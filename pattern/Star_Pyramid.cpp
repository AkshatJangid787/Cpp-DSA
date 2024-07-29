#include<iostream>
using namespace std;

void starPyramid(int n){
    for(int i=0; i<n; i++){
        for(int j=0; i=n-i+1; i++){
            cout<<" ";
        }
        
    }
}

int main(){
    int n;
    cin>>n;
    starPyramid(n);
    return 0;
} 
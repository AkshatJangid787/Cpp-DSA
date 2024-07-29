#include<iostream>
#include <limits.h>

using namespace std;

void getMinMax(int arr[], int size){
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0; i<size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"Minimun Value in Array is: "<<min<<endl;
    cout<<"Maximum Value in Array is: "<<max;
    
}

int main(){
    int arr[] = {8,47,5,3,75,72,3,9,8,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    getMinMax(arr, size);
    return 0;
}
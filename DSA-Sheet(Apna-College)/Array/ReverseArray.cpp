#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int reverseArray[size];
    int count = size-1;
    for (int i = 0; i < size; i++)
    {
        reverseArray[i] = arr[count];
        count--; 
    }
    
    for(int i=0; i<size; i++){
        cout<<reverseArray[i]<<" ";
    }

    //for space complexity o(1)

//     void reverseArray(int arr[], int size) {
//     int start = 0;
//     int end = size - 1;
//     while (start < end) {
//         Swap the elements at start and end
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         Move towards the middle
//         start++;
//         end--;
//     }

//     Print the reversed array
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
}

int main (){
    int originalArray[] = {9,8,7,6,5,4,3,2,1};
    int size = sizeof(originalArray)/sizeof(originalArray[0]);
    reverseArray(originalArray, size);
    return 0;
}
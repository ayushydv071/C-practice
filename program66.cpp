//reverse an array
//two pointers approach
#include<iostream>
using namespace std;
void reverseArr(int arr[], int size){
    int start = 0;
    int end = size-1;
    while (start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[] = {4,1,3,5,9,7};
    int size = 6;
    reverseArr(arr,size);
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
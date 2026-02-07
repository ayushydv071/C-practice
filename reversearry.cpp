#include<bits/stdc++.h>
using namespace std;
void revArray(int arr[], int size){
    int leftIndex = 0;
    int rightIndex = size-1;
    while (leftIndex < rightIndex){
        swap(arr[leftIndex],arr[rightIndex]);
        leftIndex++;
        rightIndex--;
    }

}
int main(){
    int size = 5;
    int arr[size];
    cout << "Array: ";
    for (int i=0; i<size; i++){
        cin >> arr[i];
    }
    cout << "Reversed array : " ;
    revArray(arr, size);
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
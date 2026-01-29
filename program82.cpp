#include<iostream>
using namespace std;
void reverseArr(int arr[], int size){
    int startIndex = 0;
    int endingIndex = size-1;
    while (startIndex < endingIndex){
        swap(arr[startIndex],arr[endingIndex]);
        startIndex++;
        endingIndex--;
    }
}
int main(){
    int size;
    cout << "Size of array is : ";
    cin >> size;
    int arr[size];
    for (int i=0; i<size; i++){
        cin >> arr[i];
        
    }
    cout << "Reversed array is : ";
    reverseArr(arr,size);
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}
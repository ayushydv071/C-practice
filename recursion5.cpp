//reverse an array using recursion
#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int s, int l){
    if (s>=l){
        return;
    }
    swap(arr[s],arr[l]);
    reverseArray(arr, s+1, l-1);
}
int main(){
    int size;
    cout << "Size : ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array : ";
    for (int j=0; j<size; j++){
        cin >> arr[j];
    }
    reverseArray(arr,0,size-1);
    cout << "Reversed array : ";
    for (int j=0; j<size; j++){
        cout << arr[j] << " ";
    }
    cout << endl;
    return 0;
}
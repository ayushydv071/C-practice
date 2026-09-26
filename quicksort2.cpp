#include<bits/stdc++.h>
#include<vector>
using namespace std;
int partition(vector<int> &arr, int low, int high){
    int index = low-1 , pivot = arr[high];
    for (int j=low; j<high; j++){
        if(arr[j]<=pivot){
            index++;
            swap(arr[j],arr[index]);
        }
    }
    index++;
    swap(arr[high],arr[index]);
    return index;
}
void qs(vector<int> &arr, int low, int high){
    if (low < high){
        int pIndex = partition(arr, low, high);
        qs(arr,low,pIndex-1);
        qs(arr,pIndex+1,high);
    }
}
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    qs(arr, 0, n-1);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
//swap the min and max numbers of an array
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {2,7,14,6,3,8};
    int size = 6;
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int indexL = -1;
    for (int i=0; i<size; i++){
        if(arr[i]>largest){
            largest = arr[i];
            indexL = i;
        }
    }
    int indexS = -1;
    for (int i=0; i<size; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            indexS = i;
        }


    }
    swap(arr[indexS], arr[indexL]);
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
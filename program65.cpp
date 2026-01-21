//Linear search 
//O(n)
#include<iostream>
using namespace std;
int linearSearch(int arr[], int target, int size){
    for (int i=0; i<size; i++){
        if (arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {4,6,8,10,12,16};
    int size = 6;
    int target = 8;
    cout << linearSearch(arr, target, size) << endl;
    return 0;
}
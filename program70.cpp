//print all unique values in an array
#include<iostream>
using namespace std;
void uniqueValue(int arr[], int size){
    for (int i=0; i<size; i++){
        int count = 0;
        for (int j=0; j<size; j++){
            if (arr[i]==arr[j]){
                count++;
            }
        }
        if (count == 1){
            cout << arr[i] << " ";
        }
    }
}
int main(){
    int arr[] = {1,2,3,8,7,3,4,1,2,9,8,6,11};
    int size = 13;
    uniqueValue(arr, size);
    return 0;
}
//intersection of two arrays
#include<iostream>
using namespace std;
int main(){
    int arr1[] = {1,2,3,7,8,9};
    int arr2[] = {7,5,1,9,4,2};
    int size = 6;
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            if (arr1[i] == arr2[j]){
            cout << arr1[i] << " ";
            }
        }
    }
    return 0;
}
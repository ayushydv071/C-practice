#include<iostream>
using namespace std;
int checkEven(int arr[], int size, int count=0){
    for (int i=0; i<size; i++){
        if (arr[i]%2==0){
            count+=1;
        }
    }
    return count;
}
int main(){
    int size;
    cout << "size of array is :";
    cin >> size;
    int arr[size];
    for (int i=0; i<size; i++){
        cin >> arr[i];

    }
    cout << "Even elements in the array are: " << checkEven(arr,size) << endl;
    return 0;
}
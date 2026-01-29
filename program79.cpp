//sum of array
#include<iostream>
using namespace std;
int sumOfArr(int arr[], int size){
    int sum=0;
    for (int i=0; i<size; i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int size;
    cout << "size of array:";
    cin >> size;
    int arr[size];
    for (int i=0; i<size; i++){
        cin >> arr[i]; 

    }
    cout << "Sum of all numbers in array is : " << sumOfArr(arr,size) << endl;
    return 0;

}
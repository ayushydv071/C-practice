//finding the sum and product of all numbers in an array
#include<iostream>
using namespace std;
int sumOfArr(int arr[],int size){
    int sum=0;
    for (int i=0; i<size; i++){
        sum = sum + arr[i];
        arr[i]++;
        
    }
    return sum;

}
int main(){
    int arr[]={2,4,6,8,10};
    int size = 5;
    cout << "Sum of Array will be: " << sumOfArr(arr, size) << endl;
    return 0;
}
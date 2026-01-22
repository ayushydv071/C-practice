//calculate the product of all numbers in an array
#include<iostream>
using namespace std;
int productOfArr(int arr[], int size){
    int product=1;
    for (int i=0; i<size; i++){
        product = product*arr[i];
        arr[i]++;
    }
    return product;
}
int main(){
    int arr[] = {2,4,6,8,10};
    int size = 5;
    cout << "Product of numbers will be : " << productOfArr(arr, size) << endl;
    return 0;
}
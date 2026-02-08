//finding the largest and second largest element in the array
#include<bits/stdc++.h>
using namespace std;
void largestElement(int arr[], int size){
    int Largest = INT_MIN;
    for (int i=0; i<size; i++){
        if (arr[i]>Largest){
            Largest=arr[i];
        }
    }
    cout << "Largest Element is : " << Largest << endl;
}
void secondlargest(int arr[], int size){
    int secondlargest = INT_MIN;
    int Largest = INT_MIN;
    for (int i=0; i<size; i++){
        if (arr[i]>Largest){
            secondlargest = Largest;
            Largest=arr[i];
        }
        else if (arr[i]<Largest && secondlargest<arr[i]){
            secondlargest = arr[i];
        }
    }
    cout << "Second largest element is : " << secondlargest << endl;
}
int main(){
    int size = 5;
    int arr[size];
    cout << "Enter elements : ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    largestElement(arr, size);
    secondlargest(arr, size);
    cout << endl;
    return 0;
}
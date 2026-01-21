#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {6,54,89,-1,7};
    int size=5;
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int largestIndex = -1;
    int smallestIndex = -1;
    for (int i=0; i<size; i++){
        if (arr[i]>largest){
            largest = arr[i];
            largestIndex = i;
        }
        if (arr[i]<smallest){
            smallest = arr[i];
            smallestIndex = i;
        } 
    }
    cout << "largest number is : " << largest << endl;
    cout << "Index of Largest number is: " << largestIndex << endl;
    cout << "smallest number is :" << smallest << endl; 
    cout << "Index of smallest number is : " << smallestIndex << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    map<int,int>mpp;
    for (int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    int largest = 0;
    int element;
    for (int i=0; i<n; i++){
        if (mpp[arr[i]]>largest){
            largest = mpp[arr[i]];
            element = arr[i];
        }
    }
    cout << "Highest frequency element is : " << element << endl;
    cout << "Frequency of the element is : " << largest << endl;
    return 0;
}
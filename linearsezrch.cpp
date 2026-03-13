#include<bits/stdc++.h>
using namespace std;
void linear_search(int arr[], int n, int target){
    for (int i=0; i<n; i++){
        if (arr[i]==target){
            cout << "Number Found in array" << endl;
            return;
        }
    }
    cout << "Number Not Found " << endl;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    linear_search(arr,n,target);
    return 0;
}
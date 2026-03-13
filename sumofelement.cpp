//find the index of elements who's sum is equal to the target element 
#include<bits/stdc++.h>
using namespace std;
void sumElements(int arr[], int n, int target){
    int p1=0;
    int p2=n-1;
    for (int i=p1; i<=p2; i++){
        int num = arr[p1]+arr[p2];
        p1++;
        p2--;
        if (num == target){
            cout << "Indexs are : " << p1 << " " << p2 << endl;
            return;
        }
    }
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
    sumElements(arr,n,target)
}
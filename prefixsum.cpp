#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int totalsum = 0;
    for (int i=0; i<n; i++){
        totalsum+=arr[i];
    }
    int leftsum = 0;
    for (int i=0; i<n; i++){
        leftsum+=arr[i];
        int rightsum = totalsum - leftsum;
        if (leftsum==rightsum){
            return true;
        }
        else{
            return false;
        }
    }
    cout << endl;
    return 0;
}
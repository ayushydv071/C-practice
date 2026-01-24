//brute force approach
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    int maxSum = INT_MIN;
    for(int st=0; st<n; st++){
        int currentSum = 0;
        for(int end=0; end<n; end++){
            currentSum += arr[end];
            maxSum =  max(currentSum, maxSum);
        }

    }
    cout << "Maximum subarray sum is :" << maxSum << endl;
    return 0;
}